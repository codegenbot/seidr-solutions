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
int score(string s) {
	int ans = 0;
	int strike = 0, spare = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-') {
			ans += 0;
		} else if (s[i] == 'X') {
			ans += 10;
			strike = 1;
		} else if (s[i] == '/') {
			ans += 10 - spare;
			spare = 0;
		} else {
			ans += s[i] - '0';
			if (strike) {
				ans += s[i] - '0';
				strike = 0;
			}
			spare = s[i] - '0';
		}
	}
	return ans;
}

int main() {
