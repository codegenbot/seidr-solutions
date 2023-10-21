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
int score(char c) {
	if (c == 'X' || c == '/') {
		return 10;
	}
	if (c != '-') {
		return c - '0';
	}
	return 0;
}

// XXXXXXXXXXXX
// 1234567891011
int solution(string &S) {
	int n = S.size();
	if (n > 21 || n < 12) {
		return -1;
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (S[i] == 'X' && i < n - 2) {
			res += score(S[i]) + score(S[i + 1]) + score(S[i + 2]);
		} else if (S[i] == '/' && i > 0) {
			res += 10 - score(S[i - 1]) + score(S[i]);
		} else {
			res += score(S[i]);
		}
	}
	return res;
}

int main() {
	string s = "XXXXXXXXXXXX";
	cout << solution(s) << endl;
	s = "5/5/5/5/5/5/5/5/5/5/5";
	cout << solution(s) << endl;
	s = "7115XXX548/279-X53";
	cout << solution(s) << endl;
	s = "532/4362X179-41447/5";
	cout << solution(s) << endl;
	return 0;
}
