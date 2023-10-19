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


class Solution {
public:
    int getScore(string s) {
        int res = 0;
        int tmp = 0;
        bool flag = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'X') {
                res += 10;
                if(i < s.size() - 2) {
                    res += s[i + 1] == 'X' ? 10 : s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0';
                    res += s[i + 2] == 'X' ? 10 : s[i + 2] == '/' ? 10 : s[i + 2] - '0';
                }
            } else if(s[i] == '/') {
                res += 10;
                if(i < s.size() - 1) {
                    res += s[i + 1] == 'X' ? 10 : s[i + 1] == '/' ? 10 : s[i + 1] - '0';
                }
            } else if(s[i] == '-') {
                res += 0;
            } else {
                res += s[i] - '0';
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    cout << s.getScore("XXXXXXXXXXXX") << endl;
    cout << s.getScore("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << s.getScore("7115XXX548/279-X53") << endl;
    cout << s.getScore("532/4362X179-41447/5") << endl;
}
