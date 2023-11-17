/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include <string>
#include <ostream>
#include <iostream>
using namespace std;
string flip_case(string str){
	int i;
	for(i=0;i<str.size();i++){
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		else
			str[i]=str[i]+32;
	}
	return str;
}

int main(){
	string str;
	while(getline(cin,str)){
		cout<<flip_case(str)<<endl;
	}
	return 0;
}
/*
int main(){
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    assert (flip_case("This is a test") == "tHIS IS A TEST");
    assert (flip_case("Hello World!") == "hELLO wORLD!");
    assert (flip_case("") == "");
    return 0;
}
*/
