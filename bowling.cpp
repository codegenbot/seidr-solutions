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
    int roll = 0;
    int pin = 10;
    int i = 0;
    for(;i<s.size();i++) {
        if(frame == 10) {
            return score;
        }
        if(s[i] == 'X') {
            score += pin;
            pin = 10;
            roll++;
            if(roll == 2) {
                frame++;
                roll = 0;
            }
        }
        else if(s[i] == '-') {
            roll++;
            if(roll == 2) {
                frame++;
                roll = 0;
            }
        }
        else if(s[i] == '/') {
            score += pin;
            pin = 10;
            if(s[i-1] == 'X') {
                score += pin;
                pin = 10;
            }
            else if(s[i-1] == '-') {
                score += pin;
                pin = 10;
            }
            else {
                score += (s[i-1]-'0');
                pin -= (s[i-1]-'0');
            }
            frame++;
            roll = 0;
        }
        else {
            score += (s[i]-'0');
            pin -= (s[i]-'0');
            roll++;
            if(roll == 2) {
                frame++;
                roll = 0;
            }
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
