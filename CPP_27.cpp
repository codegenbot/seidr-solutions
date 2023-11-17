/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string.h>
using namespace std;
char* filp_case(char *str){
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=(char)(str[i]-32);
		}
		else if(str[i]>='A' && str[i]<='Z'){
			str[i]=(char)(str[i]+32);
		}
	}
	return str;
}
int main(){
	char str[100];
	gets(str);
	printf("%s",filp_case(str));
	assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
