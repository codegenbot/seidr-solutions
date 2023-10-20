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
	string str, temp;
	getline(cin, str);
	int i, len = str.length();
	for (i = 0; i < len; i++) {
		if (str[i] == ' ' || str[i] == '-') {
			cout << temp;
			temp.clear();
		}
		else {
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '-') {
				temp += toupper(str[i]);
			}
			else {
				temp += tolower(str[i]);
			}
		}
	}
	if (temp.length() > 0) {
		cout << temp;
	}
	cout << endl;
	return 0;
}
