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
	while (getline(cin, input)) {
		bool first = true;
		string result = "";
		//cout << input << endl;
		int i = 0;
		for (i = 0; i < input.size(); i++) {
			if (input[i] == ' ') {
				cout << input.substr(0, i) << endl;
				break;
			}
			if (input[i] == '-') {
				if (first) {
					result += input.substr(0, i);
					first = false;
				}
				else {
					result += input.substr(0, i);
				}
				result += toupper(input[i + 1]);
				input = input.substr(i + 2);
				i = 0;
			}
		}
		if (i == input.size()) {
			result += input;
		}
		cout << result << endl;
	}
	return 0;
}
