#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
	string s;
	getline(cin, s);
	vector<string> v;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] == ' ') {
			v.push_back(" ");
		}
		else if(s[i] == '-') {
			v.push_back("-");
		}
		else {
			string tmp = "";
			while(i < s.size() && s[i] != ' ' && s[i] != '-') {
				tmp += s[i];
				i++;
			}
			v.push_back(tmp);
			i--;
		}
	}
	for(int i = 0; i < v.size(); ++i) {
		if(v[i] == " " || v[i] == "-") {
			cout << v[i];
		}
		else {
			if(i == 0 || v[i - 1] == " " || v[i - 1] == "-") {
				for(int j = 0; j < v[i].size(); ++j) {
					cout << (char)tolower(v[i][j]);
				}
			}
			else {
				for(int j = 0; j < v[i].size(); ++j) {
					if(j == 0) cout << (char)toupper(v[i][j]);
					else cout << (char)tolower(v[i][j]);
				}
			}
		}
	}
	cout << endl;
	return 0;
}
