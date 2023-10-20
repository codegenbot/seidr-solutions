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
#include <sstream>
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
int get_score(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i+1] == 'X') {
                score += 10;
                if (i+2 < s.length() && s[i+2] == 'X') {
                    score += 10;
                } else if (i+2 < s.length()) {
                    score += s[i+2] - '0';
                }
            } else if (i+2 < s.length() && s[i+2] == '/') {
                score += 10;
            } else if (i+2 < s.length()) {
                score += s[i+1] - '0';
                score += s[i+2] - '0';
            }
            i++;
        } else if (s[i] == '/') {
            score += 10;
            if (i+1 < s.length() && s[i+1] == 'X') {
                score += 10;
            } else if (i+1 < s.length()) {
                score += s[i+1] - '0';
            }
            score -= s[i-1] - '0';
            i++;
        } else if (s[i] != '-') {
            score += s[i] - '0';
        }
        i++;
    }
    return score;
}
int main() {
    cout << get_score("XXXXXXXXXXXX") << endl;
    cout << get_score("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << get_score("7115XXX548/279-X53") << endl;
    cout << get_score("532/4362X179-41447/5") << endl;
    return 0;
}
