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
int main() {
    string s;
    cin >> s;
    int score = 0;
    int index = 0;
    int strike = 0;
    int spare = 0;
    while (index < s.length()) {
        if (s[index] == 'X') {
            score += 10;
            strike++;
            if (strike == 1) {
                score += (s[index + 1] == 'X') ? 10 : (s[index + 1] - '0');
            } else if (strike == 2) {
                score += (s[index + 1] == 'X') ? 10 : (s[index + 1] - '0');
                strike = 0;
            }
        } else if (s[index] == '/') {
            score += 10;
            spare++;
            if (spare == 1) {
                score += 10;
                spare = 0;
            }
        } else if (s[index] == '-') {
            score += 0;
        } else {
            score += s[index] - '0';
        }
        index++;
    }
    cout << score << endl;
}
