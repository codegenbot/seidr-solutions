#include <iostream>
#include <string>
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
int main()
{
	string s;
	int sum = 0, x = 10;
	while (cin >> s) {
		int len = s.length(), i = 0, j = 0, k = 0;
		for (; i < len; i++) {
			if (s[i] == '-') {
				sum += x;
				j = 0;
				if (--x == 0) {
					break;
				}
			}
			else if (s[i] == 'X') {
				sum += x + 10;
				j = 0;
				if (--x == 0) {
					break;
				}
				if (i + 2 < len) {
					if (s[i + 1] == 'X') {
						sum += 10;
						if (s[i + 2] == 'X') {
							sum += 10;
						}
						else {
							sum += s[i + 2] - '0';
						}
					}
					else if (s[i + 1] == '/') {
						sum += 10;
					}
					else {
						sum += s[i + 1] - '0';
						if (i + 2 < len && s[i + 2] == '/') {
							sum += s[i + 1] - '0';
						}
					}
				}
			}
			else if (s[i] == '/') {
				sum += x;
				j = 0;
				if (--x == 0) {
					break;
				}
				if (i + 1 < len) {
					if (s[i + 1] == 'X') {
						sum += 10;
					}
					else {
						sum += s[i + 1] - '0';
					}
				}
			}
			else {
				j += s[i] - '0';
				if (j == 10) {
					sum += x;
					j = 0;
					if (--x == 0) {
						break;
					}
				}
			}
		}
		cout << sum << endl;
		sum = 0;
		x = 10;
	}
	return 0;
}
