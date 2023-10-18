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
#include <unordered_map>
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
    bool isStrike = false;
    bool isSpare = false;
    if(s == "--------------------") {
        return 0;
    }
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            isStrike = true;
            score += 10;
        }
        else if(s[i] == '/') {
            isSpare = true;
            score += 10;
        }
        else if(s[i] == '-') {
            continue;
        }
        else {
            if(isStrike) {
                if(s[i] == 'X') {
                    score += 10;
                }
                else if(s[i] != '/') {
                    score += s[i] - '0';
                }
                isStrike = false;
            }
            else if(isSpare) {
                score += s[i] - '0';
                isSpare = false;
            }
            else {
                score += s[i] - '0';
            }
        }
    }
    return score;
}
int main() {
    cout << getScore("XXXXXXXXXXXX") << endl;
    cout << getScore("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << getScore("7115XXX548/279-X53") << endl;
    cout << getScore("532/4362X179-41447/5") << endl;
    cout << getScore("--------------------") << endl;
    return 0;
}
