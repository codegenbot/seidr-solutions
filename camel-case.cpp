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
