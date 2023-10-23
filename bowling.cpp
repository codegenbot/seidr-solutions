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
int cal(string s) {
    set<char> go;
    go.insert('X');
    go.insert('/');
    go.insert('-');
    int res = 0, pre = 0, pre_pre = 0;
    for (int i = 0; i < s.size(); i++) {
        if (go.find(s[i]) == go.end()) {
            int c = s[i] - '0';
            res += c;
            pre = c;
        } else if (s[i] == '-') {
            pre = 0;
        } else {
            if (s[i] == 'X') {
                res += 10;
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        if (i + 2 < s.size()) {
                            res += 10;
                            if (s[i + 2] == 'X') {
                                res += 10;
                            } else {
                                res += s[i + 2] - '0';
                            }
                        }
                    } else if (s[i + 1] == '/') {
                        res += 10;
                        if (i + 2 < s.size()) {
                            res += s[i + 2] - '0';
                        }
                    } else {
                        res += s[i + 1] - '0';
                        if (i + 2 < s.size()) {
                            res += s[i + 2] - '0';
                        }
                    }
                }
                pre = 0;
            } else {
                res += 10 - pre;
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        res += 10;
                    } else {
                        res += s[i + 1] - '0';
                    }
                }
            }
        }
    }
    return res;
}

int cal2(string s) {
    set<char> go;
    go.insert('X');
    go.insert('/');
    go.insert('-');
    int res = 0, pre = 0, pre_pre = 0;
    for (int i = 0; i < s.size(); i++) {
        if (go.find(s[i]) == go.end()) {
            int c = s[i] - '0';
            res += c;
            pre = c;
        } else if (s[i] == '-') {
            pre = 0;
        } else {
            if (s[i] == 'X') {
                res += 10;
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        if (i + 2 < s.size()) {
                            res += 10;
                            if (s[i + 2] == 'X') {
                                res += 10;
                            } else {
                                res += s[i + 2] - '0';
                            }
                        }
                    } else if (s[i + 1] == '/') {
                        res += 10;
                        if (i + 2 < s.size()) {
                            res += s[i + 2] - '0';
                        }
                    } else {
                        res += s[i + 1] - '0';
                        if (i + 2 < s.size()) {
                            res += s[i + 2] - '0';
                        }
                    }
                }
                pre = 0;
            } else {
                res += 10 - pre;
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        res += 10;
                    } else {
                        res += s[i + 1] - '0';
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    string s = "532/4362X179-41447/5";
    printf("%d\n", cal2(s));
    return 0;
}
