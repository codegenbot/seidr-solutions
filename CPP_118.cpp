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
	int i;
	for (i = word.size() - 1; i > 0; i--) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
			if (word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' && word[i - 1] != 'A' && word[i - 1] != 'E' && word[i - 1] != 'I' && word[i - 1] != 'O' && word[i - 1] != 'U') {
				break;
			}
		}
	}
	if (i > 0) {
		return word.substr(i, 1);
	}
	else {
		return "";
	}
}

int main() {
	string word;
	getline(cin, word);
	cout << get_closest_vowel(word) << endl;
	return 0;
}
