/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string>
#include <iostream>
#include <cassert>
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
	assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
	assert (flip_case("I am a Java Programmer") == "i AM A jAVA pROGRAMMER");
	assert (flip_case("I am a Python Programmer") == "i AM A pYTHON pROGRAMMER");
	assert (flip_case("I am a C++ Programmer") == "i AM A c++ pROGRAMMER");
	assert (flip_case("I am a C# Programmer") == "i AM A c# pROGRAMMER");
	assert (flip_case("I am a Dart Programmer") == "i AM A dART pROGRAMMER");
	assert (flip_case("I am a Ruby Programmer") == "i AM A rUBY pROGRAMMER");
	assert (flip_case("I am a Go Programmer") == "i AM A gO pROGRAMMER");
	assert (flip_case("I am a Swift Programmer") == "i AM A sWIFT pROGRAMMER");
	assert (flip_case("I am a R Programmer") == "i AM A r pROGRAMMER");
	assert (flip_case("I am a Kotlin Programmer") == "i AM A kOTLIN pROGRAMMER");
	assert (flip_case("I am a Scala Programmer") == "i AM A sCALA pROGRAMMER");
	assert (flip_case("I am a PHP Programmer") == "i AM A php pROGRAMMER");
	assert (flip_case("I am a TypeScript Programmer") == "i AM A tYPESCRIPT pROGRAMMER");
	assert (flip_case("I am a C Programmer") == "i AM A c pROGRAMMER");
	assert (flip_case("I am a Rust Programmer") == "i AM A rUST pROGRAMMER");
	assert (flip_case("I am a Bash Programmer") == "i AM A bASH pROGRAMMER");
	assert (flip_case("I am a Perl Programmer") == "i AM A pERL pROGRAMMER");
	return 0;
}
