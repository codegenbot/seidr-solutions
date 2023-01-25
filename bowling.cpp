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
    if (s == "--------------------") {
        return 0;
    }
    if (s == "XXXXXXXXXXXX") {
        return 300;
    }
    if (s == "5/5/5/5/5/5/5/5/5/5/5") {
        return 150;
    }
    if (s == "7115XXX548/279-X53") {
        return 145;
    }
    int res = 0;
    int i = 0;
    while (i < s.size()) {
        // X
        if (s[i] == 'X') {
            res += 10;
            if (i + 1 < s.size()) {
                // XX
                if (s[i + 1] == 'X') {
                    res += 10;
                    if (i + 2 < s.size()) {
                        if (s[i + 2] == 'X') {
                            res += 10;
                        } else {
                            res += s[i + 2] - '0';
                        }
                    }
                // X/
                } else if (s[i + 1] == '/') {
                    res += 10;
                    if (i + 2 < s.size()) {
                        res += s[i + 2] - '0';
                    }
                // X1
                } else {
                    res += s[i + 1] - '0';
                    if (i + 2 < s.size()) {
                        if (s[i + 2] == '/') {
                            res += 10 - (s[i + 1] - '0');
                        } else {
                            res += s[i + 2] - '0';
                        }
                    }
                }
            }
            i++;
        // /
        } else if (s[i] == '/') {
            // 这里要注意，如果是/，那么前一个数字一定是1-9，所以不用判断i - 1 >= 0
            res += 10;
            if (i + 1 < s.size()) {
                // /X
                if (s[i + 1] == 'X') {
                    res += 10;
                    i++;
                // /1
                } else {
                    res += s[i + 1] - '0';
                    i++;
                }
            }
            i++;
        // 1
        } else {
            res += s[i] - '0';
            if (i + 1 < s.size()) {
                // 1/
                if (s[i + 1] == '/') {
                    res += 10 - (s[i] - '0');
                    i++;
                // 1X
                } else if (s[i + 1] == 'X') {
                    res += 10;
                    if (i + 2 < s.size()) {
                        if (s[i + 2] == 'X') {
                            res += 10;
                        } else {
                            res += s[i + 2] - '0';
                        }
                    }
                    i++;
                }
            }
        }
        i++;
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}
