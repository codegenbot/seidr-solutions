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
    int res = 0;
    int i = 0;
    // 只有10个frame，所以只需要遍历10次
    while (i < s.size()) {
        // 如果是X，则加10分，并且看下一个是什么
        if (s[i] == 'X') {
            res += 10;
            if (i + 1 < s.size()) {
                // 如果下一个是X，则加10分，并且看下下一个是什么
                if (s[i + 1] == 'X') {
                    res += 10;
                    if (i + 2 < s.size()) {
                        // 如果下下一个是X，则加10分
                        if (s[i + 2] == 'X') {
                            res += 10;
                        } else {
                            // 如果下下一个不是X，则加下下一个的分数
                            res += s[i + 2] - '0';
                        }
                    }
                // 如果下一个是/，则加10分，并且看下下一个是什么
                } else if (s[i + 1] == '/') {
                    res += 10;
                    if (i + 2 < s.size()) {
                        // 如果下下一个不是X，则加下下一个的分数
                        res += s[i + 2] - '0';
                    }
                } else {
                    // 如果下一个不是X，则加下一个的分数
                    res += s[i + 1] - '0';
                }
            }
            i++;
        // 如果是/，则加10分，并且看上一个是什么
        } else if (s[i] == '/') {
            res += 10;
            if (i - 1 >= 0) {
                // 如果上一个不是X，则减去上一个的分数
                res -= s[i - 1] - '0';
            }
            if (i + 1 < s.size()) {
                // 如果下一个不是X，则加下一个的分数
                res += s[i + 1] - '0';
            }
            i++;
        // 如果是-，则不加分
        } else if (s[i] == '-') {
            i++;
        // 如果是数字，则加分
        } else {
            res += s[i] - '0';
            i++;
        }
    }
    return res;
}
int main() {
    string s = "--------------------";
    cout << score(s) << endl;
    s = "XXXXXXXXXXXX";
    cout << score(s) << endl;
    s = "5/5/5/5/5/5/5/5/5/5/5";
    cout << score(s) << endl;
    s = "7115XXX548/279-X53";
    cout << score(s) << endl;
    s = "532/4362X179-41447/5";
    cout << score(s) << endl;
    return 0;
}
