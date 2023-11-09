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
using namespace std;
string get_closest_vowel(string word){
	string vowels = "aeiouAEIOU";
	int len = word.length();
	int i = len - 1;
	while (i >= 0) {
		if (vowels.find(word[i]) != string::npos) {
			if (i == len - 1) {
				return "";
			}
			else if (vowels.find(word[i + 1]) == string::npos) {
				return word.substr(i, 1);
			}
		}
		i--;
	}
	return "";
}
