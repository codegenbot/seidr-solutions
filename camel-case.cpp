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
	string input;
	string dash = "-";
	string space = " ";
	vector<char> charVec;
	vector<string> strArr;
	bool isCamel = false;
	bool isSpace = false;
	bool isDash = false;
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '-') {
				isDash = true;
			}
			else if (input[i] == ' ') {
				isSpace = true;
			}
			else if (input[i] == 'C') {
				isCamel = true;
			}
			else {
				charVec.push_back(input[i]);
			}
			if (isDash) {
				if (charVec.size() > 0) {
					strArr.push_back(string(charVec.begin(), charVec.end()));
				}
				charVec.clear();
				isDash = false;
			}
			else if (isSpace) {
				if (charVec.size() > 0) {
					strArr.push_back(string(charVec.begin(), charVec.end()));
					charVec.clear();
				}
				else {
					strArr.push_back(space);
				}
				isSpace = false;
			}
			else if (isCamel) {
				if (charVec.size() > 0) {
					strArr.push_back(string(charVec.begin(), charVec.end()));
					charVec.clear();
					isCamel = false;
				}

			}
		}
		if (charVec.size() > 0) {
			strArr.push_back(string(charVec.begin(), charVec.end()));
			charVec.clear();
		}
		for (int i = 0; i < strArr.size(); i++) {
			if (strArr.size() > 1) {
				if (i == 0) {
					cout << strArr[i];
				}
				if (strArr[i].length() > 0) {
					if (strArr[i] == dash) {
						cout << strArr[i + 1];
					}
					else if (strArr[i] == space) {
						cout << strArr[i] << strArr[i + 1];
					}
					else if (i > 0) {
						if (strArr[i - 1] == dash || strArr[i - 1] == space) {
							cout << strArr[i];
						}
						else {
							cout << dash << strArr[i];
						}
					}
				}
			}
			else {
				cout << strArr[i];
			}
		}
		strArr.clear();
		cout << endl;
	}
	return 0;
}
