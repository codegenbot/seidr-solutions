/*
Write a function that accepts a vector of strings.
The vector contains different words. Return the word with maximum number
of unique characters. If multiple strings have maximum number of unique
characters, return the one which comes first in lexicographical order.

find_max({"name", "of", 'string"}) == 'string"
find_max({"name", "enam", "game"}) == "enam"
find_max({"aaaaaaa", "bb" ,"cc"}) == "aaaaaaa"
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string find_max(vector<string> words){
	int max_unique = 0;
	string max_word = "";
	for (int i = 0; i < words.size(); i++){
		int unique = 0;
		for (int j = 0; j < words[i].size(); j++){
			if (words[i].find(words[i][j]) == words[i].rfind(words[i][j])){
				unique++;
			}
		}
		if (unique > max_unique){
			max_unique = unique;
			max_word = words[i];
		}
		else if (unique == max_unique){
			if (words[i] < max_word){
				max_word = words[i];
			}
		}
	}
	return max_word;
}
