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
int getScore(string input) {
    int score = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
        char c = input[i];
        if (c == 'X') {
            score += 10;
            i++;
            char c2 = input[i];
            if (c2 == 'X') {
                score += 10;
                i++;
                char c3 = input[i];
                if (c3 == 'X') {
                    score += 10;
                } else if (c3 == '/') {
                    score += 10;
                } else {
                    score += c3 - '0';
                }
            } else if (c2 == '/') {
                score += 10;
                i++;
                char c3 = input[i];
                if (c3 == 'X') {
                    score += 10;
                } else {
                    score += c3 - '0';
                }
            } else {
                score += c2 - '0';
                i++;
                char c3 = input[i];
                if (c3 == '/') {
                    score += 10;
                } else {
                    score += c3 - '0';
                }
            }
        } else if (c == '/') {
            score += 10;
            i++;
            char c2 = input[i];
            if (c2 == 'X') {
                score += 10;
            } else {
                score += c2 - '0';
            }
            i++;
        } else {
            score += c - '0';
            i++;
            char c2 = input[i];
            if (c2 == '-') {
                i++;
            } else if (c2 == '/') {
                score += 10 - (c - '0');
                i++;
            } else {
                score += c2 - '0';
                i++;
            }
        }
        frame++;
    }
    return score;
}

int main() {
    string input = "XXXXXXXXXXXX";
    cout << getScore(input) << endl;
    input = "5/5/5/5/5/5/5/5/5/5/5";
    cout << getScore(input) << endl;
    input = "7115XXX548/279-X53";
    cout << getScore(input) << endl;
    input = "532/4362X179-41447/5";
    cout << getScore(input) << endl;
    return 0;
}
