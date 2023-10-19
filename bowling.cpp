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


int score(string s) {
    int res = 0;
    int idx = 0;
    int strike = 0;
    int spare = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[idx] == 'X') {
            res += 10;
            strike = 1;
            spare = 0;
            idx++;
        } else if (s[idx] == '-') {
            idx++;
            strike = 0;
            spare = 0;
        } else {
            if (s[idx + 1] == '/') {
                res += 10;
                spare = 1;
                strike = 0;
                idx += 2;
            } else {
                res += (s[idx] - '0');
                res += (s[idx + 1] - '0');
                idx += 2;
                strike = 0;
                spare = 0;
            }
        }
        if (i == 9) {
            if (s[idx] == 'X') {
                res += 10;
                if (s[idx + 1] == 'X') {
                    res += 10;
                } else {
                    res += (s[idx + 1] - '0');
                }
                if (s[idx + 2] == 'X') {
                    res += 10;
                } else if (s[idx + 2] == '/') {
                    res += 10;
                } else {
                    res += (s[idx + 2] - '0');
                }
            } else if (s[idx] == '-') {
                idx++;
            } else {
                res += (s[idx] - '0');
                if (s[idx + 1] == 'X') {
                    res += 10;
                } else if (s[idx + 1] == '/') {
                    res += 10;
                } else if (s[idx + 1] == '-') {
                    res += 0;
                } else {
                    res += (s[idx + 1] - '0');
                }
                if (s[idx + 1] == '/') {
                    if (s[idx + 2] == 'X') {
                        res += 10;
                    } else {
                        res += (s[idx + 2] - '0');
                    }
                }
            }
        } else if (strike) {
            if (s[idx] == 'X') {
                res += 10;
                if (s[idx + 1] == 'X') {
                    res += 10;
                } else {
                    res += (s[idx + 1] - '0');
                }
            } else if (s[idx] == '-') {
                res += 0;
            } else {
                res += (s[idx] - '0');
                if (s[idx + 1] == '/') {
                    res += 10;
                } else if (s[idx + 1] == '-') {
                    res += 0;
                } else {
                    res += (s[idx + 1] - '0');
                }
            }
        } else if (spare) {
            if (s[idx] == 'X') {
                res += 10;
            } else if (s[idx] == '-') {
                res += 0;
            } else {
                res += (s[idx] - '0');
            }
        }
    }
    return res;
}

int main() {
    string s = "XXXXXXXXXXXX";
    cout << score(s) << endl;
    s = "5/5/5/5/5/5/5/5/5/5/5";
    cout << score(s) << endl;
    s = "7115XXX548/279-X53";
    cout << score(s) << endl;
    s = "532/4362X179-41447/5";
    cout << score(s) << endl;
    s = "532/4362X179-41447/5";
    cout << score(s) << endl;
    s = "X9/X9/X9/X9/X9/X9/X9/X9/X9/X9";
    cout << score(s) << endl;
    s = "X9/X9/X9/X9/X9/X9/X9/X9/X9/X-";
    cout << score(s) << endl;
    s = "-9/X9/X9/X9/X9/X9/X9/X9/X9/X-";
    cout << score(s) << endl;
    s = "-9/X9/X9/X9/X9/X9/X9/X9/X9/X7";
    cout << score(s) << endl;
    s = "-9/X9/X9/X9/X9/X9/X9/X9/X9/X-";
    cout << score(s) << endl;
    s = "-9/X9/X9/X9/X9/X9/X9/X9/X9/7/";
    cout << score(s) << endl;
    s = "-9/X9/X9/X9/X9/X9/X9/X9/X9/7/5";
    cout << score(s) << endl;
    return 0;
}
