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
int toNumber(char c) {
    return c - '0';
}

bool isStrike(char c) {
    return c == 'X';
}

bool isSpare(char c) {
    return c == '/';
}

bool isMiss(char c) {
    return c == '-';
}

int bowlingScore(string input) {
    int n = input.size();
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (isStrike(input[i])) {
            score += 10;
            if (i + 1 < n) {
                if (isStrike(input[i + 1])) {
                    score += 10;
                    if (i + 2 < n) {
                        if (isStrike(input[i + 2])) {
                            score += 10;
                        } else {
                            score += toNumber(input[i + 2]);
                        }
                    }
                } else {
                    score += toNumber(input[i + 1]);
                    if (i + 2 < n) {
                        if (isSpare(input[i + 2])) {
                            score += 10;
                        } else {
                            score += toNumber(input[i + 2]);
                        }
                    }
                }
            }
        } else if (isSpare(input[i])) {
            score += 10;
            if (i + 1 < n) {
                score += toNumber(input[i + 1]);
            }
        } else if (isMiss(input[i])) {
            // do nothing
        } else {
            score += toNumber(input[i]);
        }
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}
