/*
You will be given a string of words separated by commas or spaces. Your task is
to split the string into words and return a vector of the words.

For example:
words_string("Hi, my name is John") == {"Hi", "my", "name", "is", "John"}
words_string("One, two, three, four, five, six") == {"One", 'two", 'three", "four", "five", 'six"}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> words_string(string s){
	vector<string> ret;
	string temp = "";
	for(int i=0;i<s.length();i++){
		if(s[i] == ' ' || s[i] == ','){
			if(temp.length() != 0)
				ret.push_back(temp);
			temp = "";
		}
		else
			temp += s[i];
	}
	if(temp.length() != 0)
		ret.push_back(temp);
	return ret;
}
