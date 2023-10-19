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
/*
1. 
*/
int bowling(string round) {
	int score = 0;
	int i = 0;
	while (i < round.size()) {
		if (round[i] == 'X') {
			if (i + 2 < round.size()) {
				if (round[i + 2] == 'X') {
					score += 30;
				}
				else if (round[i + 2] == '/') {
					score += 20;
				}
				else {
					score += 10 + round[i + 2] - '0';
				}
			}
			if (i + 1 < round.size()) {
				if (round[i + 1] == 'X') {
					score += 20;
				}
				else if (round[i + 1] == '/') {
					score += 10;
				}
				else {
					score += round[i + 1] - '0';
				}
			}
			score += 10;
			i++;
		}
		else if (round[i] == '/') {
			if (i + 1 < round.size()) {
				if (round[i + 1] == 'X') {
					score += 20;
				}
				else if (round[i + 1] == '/') {
					score += 10;
				}
				else {
					score += round[i + 1] - '0';
				}
			}
			score += 10;
			i++;
		}
		else if (round[i] == '-') {
			i++;
		}
		else {
			score += round[i] - '0';
			i++;
		}
	}
	return score;
}
int main() {
	cout << bowling("XXXXXXXXXXXX") << endl;
	cout << bowling("5/5/5/5/5/5/5/5/5/5/5") << endl;
	cout << bowling("7115XXX548/279-X53") << endl;
	cout << bowling("532/4362X179-41447/5") << endl;
	return 0;
}
