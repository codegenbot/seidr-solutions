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
    int frame = 0;
    int len = s.length();
    for(int i = 0; frame < 10 && i < len; ++i) {
        char c = s[i];
        if(c == 'X') {
            score += 10;
            if(i+1 < len) {
                score += s[i+1] == 'X' ? 10 : (s[i+1] == '/' ? 10 - s[i+2] + '0' : s[i+1] - '0');
            }
            if(i+2 < len) {
                score += s[i+2] == 'X' ? 10 : (s[i+2] == '/' ? 10 - s[i+1] + '0' : s[i+2] - '0');
            }
            ++frame;
        } else if(c == '/') {
            score += 10 - s[i-1] + '0';
            if(i+1 < len) {
                score += s[i+1] == 'X' ? 10 : (s[i+1] == '/' ? 10 - s[i+2] + '0' : s[i+1] - '0');
            }
            ++frame;
        } else if(c == '-') {
            score += 0;
            ++frame;
        } else {
            score += s[i] - '0';
            if(i+1 < len && s[i+1] == '/') {
                score += 10 - s[i] + '0';
                ++i;
            }
            ++frame;
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
}
