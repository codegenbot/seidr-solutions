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
int getScore(const string &input, int index) {
    if (input[index] == 'X') {
        return 10;
    } else if (input[index] == '/') {
        return 10 - (input[index - 1] - '0');
    } else if (input[index] == '-') {
        return 0;
    } else {
        return input[index] - '0';
    }
}
int score(const string &input){
    int size = input.size();
    int score = 0;
    int frame = 0;
    int ball = 0;
    for (int i = 0; i < size; i++) {
        char c = input[i];
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                if (input[i + 1] == 'X') {
                    score += 10;
                    if (input[i + 2] == 'X') {
                        score += 10;
                    } else {
                        score += getScore(input, i + 2);
                    }
                } else if (input[i + 1] == '/') {
                    score += 10;
                } else {
                    if (input[i + 2] == '/') {
                        score += 10;
                    } else {
                        score += getScore(input, i + 1) + getScore(input, i + 2);
                    }
                }
            }
            frame ++;
            ball = 0;
            continue;
        } else if (c == '/') {
            score += 10 - getScore(input, i - 1);
            if (frame < 9) {
                if (input[i + 1] == 'X') {
                    score += 10;
                } else {
                    score += getScore(input, i + 1);
                }
            }
            frame ++;
            ball = 0;
            continue;
        } else if (c == '-') {
            ball ++;
            if (ball == 1) {
                frame ++;
                ball = 0;
            }
            continue;
        } else {
            score += c - '0';
            ball ++;
            if (ball == 2) {
                frame ++;
                ball = 0;
            }
            continue;
        }
    }
    return score;
}
int main() {
    string input;
    while (cin >> input) {
        cout << score(input) << endl;
    }
    return 0;
}
