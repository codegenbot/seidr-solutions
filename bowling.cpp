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

int getScore(string str) {
    int score = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
        if (str[i] == 'X') {
            score += 10;
            score += str[i + 1] == 'X' ? 10 : str[i + 1] - '0';
            score += str[i + 2] == 'X' ? 10 : str[i + 2] - '0';
            i++;
        } else if (str[i] == '/') {
            score += 10;
            score += str[i + 1] == 'X' ? 10 : str[i + 1] - '0';
            i += 2;
        } else {
            score += str[i] - '0';
            if (str[i + 1] == '-') {
                i += 2;
            } else {
                score += str[i + 1] == 'X' ? 10 : str[i + 1] - '0';
                i += 2;
            }
        }
        frame++;
    }
    return score;
}

int main() {
    string str = "XXXXXXXXXXXX";
    cout << getScore(str) << endl;
    str = "5/5/5/5/5/5/5/5/5/5/5";
    cout << getScore(str) << endl;
    str = "7115XXX548/279-X53";
    cout << getScore(str) << endl;
    str = "532/4362X179-41447/5";
    cout << getScore(str) << endl;
    return 0;
}
