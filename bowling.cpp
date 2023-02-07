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
    getline(cin, input);
    int score = 0, cur_score = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            cur_score = 10;
            if (i + 1 < input.size() && input[i + 1] == 'X') {
                cur_score += 10;
                if (i + 2 < input.size() && input[i + 2] == 'X') {
                    cur_score += 10;
                } else if (i + 2 < input.size() && input[i + 2] == '/') {
                    cur_score += 10;
                } else {
                    cur_score += input[i + 2] - '0';
                }
            } else if (i + 1 < input.size() && input[i + 1] == '/') {
                cur_score += 10;
            } else {
                cur_score += input[i + 1] - '0';
                if (i + 2 < input.size() && input[i + 2] == '/') {
                    cur_score += 10 - (input[i + 1] - '0');
                } else {
                    cur_score += input[i + 2] - '0';
                }
            }
        } else if (input[i] == '/') {
            cur_score = 10 - (input[i - 1] - '0');
            if (i + 1 < input.size() && input[i + 1] == 'X') {
                cur_score += 10;
            } else if (i + 1 < input.size() && input[i + 1] == '/') {
                cur_score += 10;
            } else {
                cur_score += input[i + 1] - '0';
            }
        } else if (input[i] == '-') {
            cur_score = 0;
        } else {
            cur_score = input[i] - '0';
        }
        score += cur_score;
        cur_score = 0;
    }
    cout << score << endl;
}
