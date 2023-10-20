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
string camelCase(string str) {
	string result;
	bool isFirst = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			result += ' ';
		}
		else if (str[i] == '-') {
			isFirst = true;
		}
		else if (isFirst) {
			result += toupper(str[i]);
			isFirst = false;
		}
		else {
			result += str[i];
		}
	}
	return result;
}
int main() {
	cout << camelCase("camel-case example-test-string") << endl;
	return 0;
}
