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
    int res = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            if(i+2 < s.size()) {
                if(s[i+1] == 'X') {
                    if(s[i+2] == 'X') res += 30;
                    else res += 20 + s[i+2] - '0';
                } else {
                    if(s[i+2] == '/') res += 20;
                    else res += 10 + (s[i+1] - '0') + (s[i+2] - '0');
                }
            }
        } else if(s[i] == '/') {
            if(i+1 < s.size()) {
                if(s[i-1] == 'X') res += 10 + s[i+1] - '0';
                else res += 10 + s[i+1] - '0' - (s[i-1] - '0');
            }
        } else if(s[i] == '-') {
            continue;
        } else {
            res += s[i] - '0';
        }
    }
    return res;
}
int main() {
    string s;
    while(cin >> s) {
        cout << cal(s) << endl;
    }
    return 0;
}
