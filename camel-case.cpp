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
string camelCase(string input) {
	string res = "";
	int n = input.size();
	if (n == 0) return res;
	int i = 0;
	while (i < n) {
		if (input[i] == ' ') {
			res += ' ';
			i++;
			continue;
		}
		string temp = "";
		while (i < n && input[i] != ' ' && input[i] != '-') {
			temp += input[i];
			i++;
		}
		if (temp.size() > 1) {
			temp[0] = toupper(temp[0]);
		}
		res += temp;
		while (i < n && input[i] == '-') {
			i++;
		}
	}
	return res;
}
int main() {
	string input = "camel-case example-test-string";
	cout << camelCase(input) << endl;
	return 0;
}
