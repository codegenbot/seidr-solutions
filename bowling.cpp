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
    string input;
    int score = 0;
    int frame = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int bonus = 0;
    while (cin >> input) {
        score = 0;
        frame = 0;
        i = 0;
        j = 0;
        k = 0;
        bonus = 0;
        for (i = 0; i < input.size(); i++) {
            if (input[i] == 'X') {
                score += 10;
                if (i + 2 < input.size()) {
                    if (input[i + 1] == 'X') {
                        score += 10;
                        if (i + 2 < input.size()) {
                            if (input[i + 2] == 'X') {
                                score += 10;
                            } else if (input[i + 2] == '/') {
                                score += 10;
                            } else {
                                score += input[i + 2] - '0';
                            }
                        }
                    } else if (input[i + 1] == '/') {
                        score += 10;
                        if (i + 2 < input.size()) {
                            if (input[i + 2] == 'X') {
                                score += 10;
                            } else if (input[i + 2] == '/') {
                                score += 10;
                            } else {
                                score += input[i + 2] - '0';
                            }
                        }
                    } else {
                        score += input[i + 1] - '0';
                        if (i + 2 < input.size()) {
                            if (input[i + 2] == 'X') {
                                score += 10;
                            } else if (input[i + 2] == '/') {
                                score += 10;
                            } else {
                                score += input[i + 2] - '0';
                            }
                        }
                    }
                }
                frame++;
            } else if (input[i] == '/') {
                score += 10;
                if (i + 1 < input.size()) {
                    if (input[i + 1] == 'X') {
                        score += 10;
                    } else if (input[i + 1] == '/') {
                        score += 10;
                    } else {
                        score += input[i + 1] - '0';
                    }
                }
                frame++;
            } else if (input[i] == '-') {
                frame++;
            } else {
                score += input[i] - '0';
                frame++;
            }
            if (frame == 10) {
                break;
            }
        }
        cout << score << endl;
    }
    return 0;
}
