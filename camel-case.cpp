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
	string res = "";
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			res += " ";
		}
		else if (s[i] == '-') {
			res += "";
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			if (res.size() == 0) {
				res += s[i];
			}
			else if (res[res.size() - 1] == ' ') {
				res += s[i];
			}
			else if (res[res.size() - 1] >= 'a' && res[res.size() - 1] <= 'z') {
				res += s[i];
			}
			else {
				res += s[i] - 'a' + 'A';
			}
		}
		else {
			res += s[i];
		}
	}
	cout << res << endl;
	return 0;
}
