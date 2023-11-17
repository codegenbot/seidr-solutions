/*
You are given a word. Your task is to find the closest vowel that stands between 
two consonants from the right side of the word (case sensitive).

Vowels in the beginning and ending doesn't count. Return empty string if you didn't
find any vowel met the above condition. 

You may assume that the given string contains English letter only.

Example:
get_closest_vowel("yogurt") ==> "u"
get_closest_vowel("FULL") ==> "U"
get_closest_vowel("quick") ==> ""
get_closest_vowel("ab") ==> ""
*/
#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
string get_closest_vowel(string word){
	string vowels = "aeiou";
	int pos = -1;
	for(int i = word.length()-1; i >= 0; i--){
		if(vowels.find(word[i]) != string::npos){
			pos = i;
			break;
		}
	}
	if(pos == -1){
		return "";
	}
	int dist = word.length() - pos;
	for(int i = pos-1; i >= 0; i--){
		if(vowels.find(word[i]) == string::npos){
			if(word.length() - i < dist){
				return word.substr(i+1, 1);
			}
		}
	}
	return "";
}

int main(){
	cout << get_closest_vowel("yogurt") << endl;
	cout << get_closest_vowel("FULL") << endl;
	cout << get_closest_vowel("quick") << endl;
	cout << get_closest_vowel("ab") << endl;
	return 0;
}
