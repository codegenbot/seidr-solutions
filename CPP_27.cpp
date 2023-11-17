#include<iostream>
#include<string>
#include <ostream>
#include <cassert>
using namespace std;
/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
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
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    assert (flip_case("hello") == "HELLO");
    assert (flip_case("HELLO") == "hello");
    assert (flip_case("") == "");
    assert (flip_case("a") == "A");
    assert (flip_case("A") == "a");
    assert (flip_case("!a") == "!A");
    assert (flip_case("!A") == "!a");
    assert (flip_case("!aA") == "!Aa");
    assert (flip_case("aA!") == "Aa!");
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
