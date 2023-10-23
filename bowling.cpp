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
int getScore(char c) {
	if (c == 'X') return 10;
	else if (c == '/') return 10;
	else if (c >= '0' && c <= '9') return c-'0';
	return 0;
}
int getStrike(string s, int i) {
	int ret = 0;
	if (i+2 >= s.length()) return ret;
	if (s[i+1] == '/') ret = 10 - getScore(s[i+2]);
	else if (s[i+1] == 'X') ret = 20;
	else if (s[i+2] == '/') {
		int a = getScore(s[i+1]);
		int b = getScore(s[i+2]);
		ret = 10 - a;
	} else if (s[i+1] >= '0' && s[i+1] <= '9' && s[i+2] >= '0' && s[i+2] <= '9') {
		int a = getScore(s[i+1]);
		int b = getScore(s[i+2]);
		ret = a + b;
	}
	return ret;
}
int getSpare(string s, int i) {
	int ret = 0;
	if (i+1 >= s.length()) return ret;
	if (s[i+1] == '/') ret = 10;
	else if (s[i+1] == 'X') ret = 10;
	else if (s[i+1] >= '0' && s[i+1] <= '9')
		ret = 10 - getScore(s[i+1]);
	return ret;
}
int bowlingScore(string bowlingCode) {
	int ret = 0;
	for (int i = 0; i < bowlingCode.length(); i++) {
		if (bowlingCode[i] == 'X') {
			ret += getScore(bowlingCode[i]);
			int score = getStrike(bowlingCode, i);
			ret += score;
		} else if (bowlingCode[i] == '/') {
			ret += getScore(bowlingCode[i]);
			ret += getSpare(bowlingCode, i);
		} else if (bowlingCode[i] >= '0' && bowlingCode[i] <= '9') {
			ret += getScore(bowlingCode[i]);
		}
	}
	return ret;
}
int main() {
	cout << bowlingScore("XXXXXXXXXXXX") << endl;
}
