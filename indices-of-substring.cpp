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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
	string message, target;
	getline(cin, message);
	getline(cin, target);
	if (target.length() > message.length()) {
		cout << "Traget's length is longer than message's length";
		return 0;
	}
	int targetcout = 0;
	int startIdx = target.length() - 1;
	queue<int> idx;
	bool firstMulti = false;
	for (int i = 0; i != message.length(); ++i) {
		int compare_targetIdx = startIdx;
		int compare_messageIdx = i;
		bool first = true;
		for (int j = target.length() - 1; j != -1; --j) {
			if (target[compare_targetIdx] == message[compare_messageIdx]) {
				if (first) {
					++targetcout;
					first = false;
				}
				--compare_targetIdx;
				--compare_messageIdx;

			}
			else {
				if (!firstMulti && compare_messageIdx + 1 != message.length() && i != 0 && message[compare_messageIdx + 1] == message[compare_messageIdx]) {
					firstMulti = true;
				}
				targetcout = 0;
				break;
			}
			if (targetcout == target.length()) {
				idx.push(compare_messageIdx + 1);
				targetcout = 0;
			}
		}
	}
	if (targetcout > 0) {
		idx.push(0);
	}
	int count = 0;
	while (!idx.empty()) {
		if (count != 0)
			cout << ' ';
		cout << idx.front();
		idx.pop();
		++count;
	}
	if (count == 0) {
		cout << "No possible index found";
	}
	else if (firstMulti) {
		cout << "WARNING: Indices are repetitive - could not identify target";
	}
	return 0;
}
