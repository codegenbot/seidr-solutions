#include<iostream>
#include<string>
#include <ostream>
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
    assert (flip_case("The Quick Brown Fox Jumped Over The Lazy Dog") == "tHE qUICK bROWN fOX jUMPED oVER tHE lAZY dOG");
    assert (flip_case("") == "");
    assert (flip_case("1") == "1");
    assert (flip_case("123") == "123");
    assert (flip_case("123!@#") == "123!@#");
    assert (flip_case("!@#123") == "!@#123");
    assert (flip_case("1A2B") == "1a2b");
    assert (flip_case("1a2b") == "1A2B");
    assert (flip_case("AaBb") == "aAbB");
    return 0;
}
