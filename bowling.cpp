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
int charToNums(string s, int i) {
    if (s[i] == 'X') {
        return 10;
    } else if (s[i] == '-') {
        return 0;
    } else {
        return s[i] - '0';
    }
}
int score(string s) {
    int res = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'X') {
            res += 10; // X
            if (i + 1 < s.size() && s[i + 1] == 'X') { // X
                res += 10;
                if (i + 2 < s.size() && s[i + 2] == 'X') { // X
                    res += 10;
                } else {
                    res += charToNums(s, i + 2);
                }
            } else if (i + 1 < s.size() && s[i + 1] == '/') { // /
                res += 10;
                if (i + 2 < s.size()) {
                    res += charToNums(s, i + 2);
                }
            } else { // number
                res += charToNums(s, i + 1);
                if (i + 2 < s.size()) {
                    if (s[i + 2] == '/') { // /
                        res += 10 - (s[i + 1] - '0');
                    } else { // number
                        res += charToNums(s, i + 2);
                    }
                }
            }
            i++;
        } else if (s[i] == '/') {
            res += 10; // /
            if (i - 1 >= 0) { // number
                res -= charToNums(s, i - 1);
            }
            if (i + 1 < s.size()) { // number
                res += charToNums(s, i + 1);
            }
            i++;
        } else {
            res += charToNums(s, i);
            i++;
        }
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}
