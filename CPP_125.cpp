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
using namespace std;
vector<string> split_words(string txt){
	vector<string> v;
	for (int i = 0; i < txt.length(); i++)
	{
		if (txt[i] == ' ')
		{
			v.push_back(txt.substr(0, i));
			txt = txt.substr(i + 1, txt.length() - i - 1);
			i = 0;
		}
		else if (txt[i] == ',')
		{
			v.push_back(txt.substr(0, i));
			txt = txt.substr(i + 1, txt.length() - i - 1);
			i = 0;
		}
	}
	int count = 0;
	for (int i = 0; i < txt.length(); i++)
	{
		if (txt[i] - 'a' >= 0 && txt[i] - 'a' <= 26)
			count++;
		else
			break;
	}
	if (count == txt.length())
		v.push_back(to_string(count));
	else
		v.push_back(txt);
	return v;
}
