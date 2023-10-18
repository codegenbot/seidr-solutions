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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
// 计算得分
int getScore(string s) {
	int sum = 0;
	int i = 0;
	for (; i < s.length(); i++) {
		if (s[i] == 'X') {
			sum += 10;
			if (s[i + 2] == 'X') {
				sum += 10;
			}
			else {
				sum += (s[i + 2] - '0');
			}
			if (s[i + 4] == 'X') {
				sum += 10;
			}
			else if (s[i + 4] == '/') {
				sum += (10 - (s[i + 2] - '0'));
			}
			else {
				sum += (s[i + 4] - '0');
			}
		}
		else if (s[i] == '/') {
			sum += (10 - (s[i - 1] - '0'));
			if (s[i + 2] == 'X') {
				sum += 10;
			}
			else if (s[i + 2] == '/') {
				sum += (10 - (s[i + 1] - '0'));
			}
			else {
				sum += (s[i + 2] - '0');
			}
		}
		else if (s[i] == '-') {
			continue;
		}
		else {
			sum += (s[i] - '0');
		}
		if (i == s.length() - 1) {
			break;
		}
		if (s[i + 1] == 'X') {
			i++;
		}
		else if (s[i + 1] == '/') {
			i += 2;
		}
		else if (s[i + 1] == '-') {
			i++;
		}
	}
	return sum;
}
int main() {
	string s = "XXXXXXXXXXXX";
	cout << getScore(s) << endl;
	return 0;
}
