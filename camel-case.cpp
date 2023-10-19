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
int main() {
	//Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
	string raw;
	cin >> raw;
	int flag = 0;
	string res;
	for (int i = 0; i < raw.size(); i++) {
		if (raw[i] == '-') {
			flag = 1;
			continue;
		}
		if (raw[i] == ' ') {
			res += " ";
			continue;
		}
		if (flag) {
			string tmp(1, toupper(raw[i]));
			res += tmp;
			flag = 0;
		}
		else {
			res += raw[i];
		}
	}

	raw = res;
	while(raw.back() == ' ')
		raw.pop_back();
	if (raw[0] >= 'A' && raw[0] <= 'Z') {
		raw[0] = raw[0] + 32;
		cout << raw;
	}
	else {
		cout << raw;
	}
	//cout << raw;
	return 0;
}
/*
For example,
input:
car_make
output:
carMake
input: 
camel-case example-test-string
output: 
camelCase exampleTestString
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
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		if (nums[i] < nums[i - 1]) {
			res += nums[i - 1] - nums[i];
			nums[i] = nums[i - 1];
		}
	}
	cout << res << endl;
	return 0;
}
