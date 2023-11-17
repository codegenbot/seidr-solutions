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
	int max = 0, len = 0, count = 0;
	string res;
	for (int i = 0; i < words.size(); i++) {
		len = words[i].length();
		count = 0;
		for (int j = 0; j < len; j++) {
			for (int k = j + 1; k < len; k++) {
				if (words[i][j] == words[i][k]) {
					break;
				}
				if (k == len - 1) {
					count++;
				}
			}
		}
		if (count > max) {
			max = count;
			res = words[i];
		}
		else if (count == max && words[i] < res) {
			res = words[i];
		}
	}
	return res;
}
