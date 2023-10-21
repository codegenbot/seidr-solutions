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
int main() {
    string s = "7115XXX548/279-X53";
    int ans = 0;
    int i = 0;
    bool flag = true;
    while(i < s.size() && flag) {
        if(s[i] == 'X') {
            ans += 10;
            if(i + 1 < s.size()) {
                if(s[i + 1] == 'X') {
                    ans += 10;
                    if(i + 2 < s.size()) {
                        if(s[i + 2] == 'X') {
                            ans += 10;
                        } else {
                            ans += s[i + 2] - '0';
                        }
                    }
                } else if(s[i + 1] == '/') {
                    ans += 10;
                } else {
                    ans += s[i + 1] - '0';
                }
            }
            if(i + 2 < s.size()) {
                if(s[i + 2] == 'X') {
                    ans += 10;
                } else if(s[i + 2] == '/') {
                    ans += 10;
                } else {
                    ans += s[i + 2] - '0';
                }
            }
            i++;
        } else if(s[i] == '/') {
            ans += 10;
            if(i + 1 < s.size()) {
                if(s[i + 1] == 'X') {
                    ans += 10;
                } else {
                    ans += s[i + 1] - '0';
                }
            }
        } else if(s[i] == '-') {
            ans += 0;
        } else {
            ans += s[i] - '0';
        }
        i++;
        if(i == s.size() || i == 20) {
            flag = false;
        }
    }
    cout << ans << endl;
    return 0;
}
