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

int helper(string str) {
    int score = 0;
    bool nExt = false;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (i == len - 2) {
            if (str[i + 1] == '/')
                nExt = true;
            else if (isdigit(str[len - 1]))
                nExt = false;
        }
        if (c == 'X') {
            score+=10;
            if (i < len - 2) {
                if (str[i+1] == 'X')  {
                    if (i != len - 2) {
                        score += 20 - (str[i+2] - '0');
                    }
                    else {
                        score += (str[i+2] - '0');
                    }
                }
                else if (str[i + 1] == '/') {
                    score += (10 - (str[i+1] - '0'));
                }
                else if (isdigit(str[i + 1])) {
                    score += (str[i+2] - '0');
                }
            }
            else if (i == len - 2) {
                if (str[i + 1] == '/')
                    score+= 10;
            }
        }
        else if (c == '/') {
            score += (10 - (str[i-1] - '0'));
            if (nExt) {
                score += (str[i+1] - '0');
                nExt = false;
            }
        }
        else {
            score += c - '0';
        }
    }
    return score;
}

int main() {
    cout << helper("XXXXXXXXXXXX") << endl;//300
    cout << helper("0234513X-/X45") << endl;//97
    cout << helper("-/X5-/1X35-/") << endl;//57
    return 0;
}
