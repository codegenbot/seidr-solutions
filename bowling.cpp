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
    while (getline(cin, input)) {
        int score = 0;
        int frame = 1;
        int roll = 1;
        for (int i = 0; i < input.size(); i++) {
            if (frame > 10) break;
            if (input[i] == 'X') {
                score += 10;
                if (frame < 10) {
                    score += 10;
                    if (input[i + 1] == 'X') {
                        score += 10;
                        i++;
                    } else {
                        score += input[i + 1] - '0';
                        i++;
                    }
                }
                frame++;
                roll = 1;
            } else if (input[i] == '/') {
                score += 10;
                if (frame < 10) {
                    score += input[i + 1] - '0';
                    i++;
                }
                frame++;
                roll = 1;
            } else if (input[i] == '-') {
                roll++;
                if (roll == 2) {
                    frame++;
                    roll = 1;
                }
            } else {
                score += input[i] - '0';
                roll++;
                if (roll == 2) {
                    frame++;
                    roll = 1;
                }
            }
        }
        cout << score << endl;
    }
}
