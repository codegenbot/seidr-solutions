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
int helper(string input, int start, int end) {
    if (start >= end) {
        return 0;
    }
    int score = 0;
    if (input[start] == 'X') {
        score += 10;
        if (input[start + 2] == 'X') {
            score += 10;
        } else if (input[start + 2] == '/') {
            score += 10;
        } else {
            score += (input[start + 2] - '0');
        }
        if (input[start + 4] == 'X') {
            score += 10;
        } else if (input[start + 4] == '/') {
            score += 10;
        } else {
            score += (input[start + 4] - '0');
        }
        if (input[start + 1] == 'X') {
            score += 10;
            if (input[start + 3] == '/') {
                score += 10;
            } else {
                score += (input[start + 3] - '0');
            }
        } else if (input[start + 1] == '/') {
            score += 10;
        } else {
            score += (input[start + 1] - '0');
            if (input[start + 3] == 'X') {
                score += 10;
            } else if (input[start + 3] == '/') {
                score += (10 - (input[start + 1] - '0'));
            } else {
                score += (input[start + 3] - '0');
            }
        }
        return score + helper(input, start + 2, end);
    } else if (input[start] == '/') {
        score += (10 - (input[start - 1] - '0'));
        if (input[start + 1] == 'X') {
            score += 10;
        } else {
            score += (input[start + 1] - '0');
        }
        return score + helper(input, start + 1, end);
    } else if (input[start] == '-') {
        return helper(input, start + 1, end);
    } else {
        score += (input[start] - '0');
        if (input[start + 1] == '/') {
            score += 10;
        } else if (input[start + 1] == 'X') {
            score += 10;
            if (input[start + 2] == 'X') {
                score += 10;
            } else {
                score += (input[start + 2] - '0');
            }
        } else {
            score += (input[start + 1] - '0');
        }
        return score + helper(input, start + 1, end);
    }
}
int main() {
    string input = "7115XXX548/279-X53";
    cout << helper(input, 0, input.size()) << endl;
    return 0;
}
