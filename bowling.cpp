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
bool isStrike(char c) {
    return c == 'X';
}
bool isSpare(char c) {
    return c == '/';
}
int getScore(char c) {
    if (c == 'X') return 10;
    if (c == '-') return 0;
    return c - '0';
}
int getScore(char c1, char c2) {
    if (c1 == 'X') return 10;
    if (c1 == '-') return 0;
    if (c2 == '/') return 10;
    if (c2 == '-') return 0;
    return c1 - '0' + c2 - '0';
}
int getScore(char c1, char c2, char c3) {
    if (c1 == 'X') return 10 + getScore(c2) + getScore(c3);
    if (c1 == '-') return 0;
    if (c2 == '/') return 10 + getScore(c3);
    if (c2 == '-') return 0;
    return c1 - '0' + c2 - '0';
}
int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.size()) {
        if (isStrike(s[i])) {
            score += getScore(s[i], s[i + 1], s[i + 2]);
            i++;
        } else if (isSpare(s[i + 1])) {
            score += getScore(s[i], s[i + 1], s[i + 2]);
            i += 2;
        } else {
            score += getScore(s[i], s[i + 1]);
            i += 2;
        }
    }
    return score;
}
int main() {
    cout << bowlingScore("XXXXXXXXXXXX") << endl;
    cout << bowlingScore("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << bowlingScore("7115XXX548/279-X53") << endl;
    cout << bowlingScore("532/4362X179-41447/5") << endl;
    return 0;
}
