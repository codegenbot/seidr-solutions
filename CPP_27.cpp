/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string>
using namespace std;
string filp_case(string str){
	int i;
	for(i=0;i<str.length();i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32;
		}
	}
	return str;
}
int main(){
	string str;
	cin>>str;
	cout<<filp_case(str);
	return 0;
}
