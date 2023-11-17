/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string>
using namespace std;
string filp_case(string str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32;
		}
		i++;
	}
	return str;
}
int main(){
	string str;
	getline(cin,str);
	str=filp_case(str);
	cout<<str;
}
