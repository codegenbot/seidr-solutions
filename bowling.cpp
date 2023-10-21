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
    int res = 0;
    int i = 0;
    int j = 0;
    while(j < s.size()) {
        if(s[j] == 'X') {
            res += 10;
            if(j + 1 < s.size()) {
                if(s[j + 1] == 'X') {
                    res += 10;
                    if(j + 2 < s.size()) {
                        if(s[j + 2] == 'X') {
                            res += 10;
                        } else {
                            res += s[j + 2] - '0';
                        }
                    }
                } else if(s[j + 1] == '/') {
                    res += 10;
                } else {
                    res += s[j + 1] - '0';
                }
            }
            if(j + 2 < s.size()) {
                if(s[j + 2] == '/') {
                    res += 10;
                } else {
                    res += s[j + 2] - '0';
                }
            }
            j++;
        } else if(s[j] == '/') {
            res += 10;
            if(j + 1 < s.size()) {
                if(s[j + 1] == 'X') {
                    res += 10;
                } else {
                    res += s[j + 1] - '0';
                }
            }
            j++;
        } else {
            res += s[j] - '0';
        }
        j++;
    }
    return res;
}

int main() {
    string s = "XXXXXXXXXXXX";
    cout << getScore(s) << endl;
    return 0;
}
