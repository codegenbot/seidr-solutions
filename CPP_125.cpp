/*
Given a string of words, return a vector of words split on whitespace, if no whitespaces exists in the text you
should split on commas ',' if no commas exists you should return a vector with one element, the number of lower-case letters with odd order in the
alphabet, ord("a") = 0, ord("b") = 1, ... ord("z") = 25
Examples
split_words("Hello world!") ➞ {"Hello", "world!"}
split_words("Hello,world!") ➞ {"Hello", "world!"}
split_words("abcdef") == {"3"} 
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include <ostream>
#include <iostream>
using namespace std;
vector<string> split_words(string txt){
	vector<string> res;
	int i = 0;
	while (i < txt.size()){
		if (txt[i] == ' '){
			res.push_back(txt.substr(0, i));
			txt = txt.substr(i + 1);
			i = 0;
		}
		else if (txt[i] == ','){
			res.push_back(txt.substr(0, i));
			txt = txt.substr(i + 1);
			i = 0;
		}
		else{
			i++;
		}
	}
	if (res.size() == 0){
		int cnt = 0;
		for (int i = 0; i < txt.size(); i++){
			if ((txt[i] - 'a') % 2 == 1){
				cnt++;
			}
		}
		res.push_back(to_string(cnt));
	}
	else{
		res.push_back(txt);
	}
	return res;
}
