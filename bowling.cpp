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

int bowlingScore(string &s) {
    int total = 0;
    int i = 0;
    int frame = 10;
    while (i < s.length() && frame > 0) {
        if (s[i] == 'X') {
            total += 10;
            if (i+1 < s.length()) {
                if (s[i+1] == 'X') {
                    total += 10;
                    if (i+2 < s.length()) {
                        if (s[i+2] == 'X') {
                            total += 10;
                        } else {
                            total += (s[i+2] - '0');
                        }
                    }
                } else {
                    total += (s[i+1] - '0');
                    if (i+2 < s.length()) {
                        if (s[i+2] == '/') {
                            total += 10;
                        } else {
                            total += (s[i+2] - '0');
                        }
                    }
                }
            }
            i++;
        } else if (s[i] == '-') {
            i++;
        } else if (s[i] == '/') {
            total += 10;
            if (i-1 >= 0) {
                total += (s[i-1] - '0');
            }
            if (i+1 < s.length()) {
                if (s[i+1] != 'X') {
                    total += (s[i+1] - '0');
                }
            }
            i++;
        } else {
            total += (s[i] - '0');
            i++;
        }
        frame--;
    }
    return total;
}

int main() {
    string s = "XXXXXXXXXXXX";
    cout << bowlingScore(s) << endl;
    s = "5/5/5/5/5/5/5/5/5/5/5";
    cout << bowlingScore(s) << endl;
    s = "7115XXX548/279-X53";
    cout << bowlingScore(s) << endl;
    s = "532/4362X179-41447/5";
    cout << bowlingScore(s) << endl;
    return 0;
}
