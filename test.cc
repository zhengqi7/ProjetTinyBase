#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	char fileName[20];
	strcpy(fileName, "hello");
	char newFileName[20];
	//on récupère le nom filename
	strcpy(newFileName, fileName);
	
	//on concatène avec le numéro d'index
	sprintf(newFileName,"%s.%d",newFileName,32);
	printf("%s\n",newFileName);

}
