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
int helper(string &s, int start) {
    int res = 0;
    if (s[start] == 'X') {
        res = 10 + helper(s, start+1);
        if (s[start+1] == 'X') {
            res += 10 + helper(s, start+2);
        } else if (s[start+1] == '/') {
            res += 10 - (s[start+1] - '0');
        } else {
            res += s[start+1] - '0';
        }
    } else if (s[start] == '/') {
        res = 10 - (s[start-1] - '0');
        if (s[start+1] == 'X') {
            res += 10 + helper(s, start+2);
        } else {
            res += s[start+1] - '0';
        }
    } else {
        res = s[start] - '0';
    }
    return res;
}
int main() {
    string s;
    while (getline(cin, s)) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                continue;
            }
            res += helper(s, i);
            if (s[i] == 'X') {
                i += 2;
            } else if (s[i] == '/') {
                i += 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
