/*
Task
We are given two strings s and c, you have to deleted all the characters in s that are equal to any character in c
then check if the result string is palindrome.
A string is called palindrome if it reads the same backward as forward.
You should return a vector containing the result string and "True"/"False" for the check.
Example
For s = "abcde", c = "ae", the result should be ("bcd","False")
For s = "abcdef", c = "b"  the result should be ("acdef","False")
For s = "abcdedcba", c = "ab", the result should be ("cdedc","True")
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> reverse_delete(string s,string c){
	vector<string> result;
	string result_s = "";
	string result_c = "True";
	for (int i = 0; i < s.length(); i++) {
		if (find(c.begin(), c.end(), s[i]) == c.end()) {
			result_s += s[i];
		}
	}
	for (int i = 0; i < result_s.length() / 2; i++) {
		if (result_s[i] != result_s[result_s.length() - 1 - i]) {
			result_c = "False";
		}
	}
	result.push_back(result_s);
	result.push_back(result_c);
	return result;
}
int main() {
	vector<string> result = reverse_delete("abcdedcba", "ab");
	for (int i = 0; i < result.size(); i++) {
		printf("%s ", result[i].c_str());
	}
	return 0;
}
