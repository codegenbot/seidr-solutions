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
int getScore(string s) {
    int score = 0;
    int idx = 0;
    for (int i = 0; i < 10; i++) {
        if (s[idx] == 'X') {
            score += 10;
            if (s[idx + 1] == 'X') {
                score += 10;
                if (s[idx + 2] == 'X') score += 10;
                else score += s[idx + 2] - '0';
            } else {
                if (s[idx + 2] == '/') score += 10;
                else score += s[idx + 1] - '0' + s[idx + 2] - '0';
            }
            idx++;
        } else if (s[idx + 1] == '/') {
            score += 10;
            if (s[idx + 2] == 'X') score += 10;
            else score += s[idx + 2] - '0';
            idx += 2;
        } else {
            score += s[idx] - '0' + s[idx + 1] - '0';
            idx += 2;
        }
    }
    return score;
}

int main() {
    string s = "XXXXXXXXXXXX";
    cout << getScore(s) << endl;
    s = "5/5/5/5/5/5/5/5/5/5/5";
    cout << getScore(s) << endl;
    s = "7115XXX548/279-X53";
    cout << getScore(s) << endl;
    s = "532/4362X179-41447/5";
    cout << getScore(s) << endl;
    return 0;
}
