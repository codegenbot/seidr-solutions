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
    int ret = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            ret += 10;
            if(i+1 < s.size() && s[i+1] == 'X') {
                ret += 10;
                if(i+2 < s.size() && s[i+2] == 'X') ret += 10;
                else ret += s[i+2] - '0';
            } else if(i+1 < s.size() && s[i+1] == '/') {
                ret += 10;
            } else if(i+1 < s.size()) {
                ret += s[i+1] - '0';
                if(i+2 < s.size() && s[i+2] == '/') ret += 10;
            }
        } else if(s[i] == '/') {
            ret += 10;
            if(i-1 >= 0 && s[i-1] == 'X') {
                ret += 10;
            } else if(i-1 >= 0) {
                ret += s[i-1] - '0';
            }
            if(i+1 < s.size() && s[i+1] == 'X') ret += 10;
            else if(i+1 < s.size()) ret += s[i+1] - '0';
        } else if(s[i] == '-') {
            ret += 0;
        } else {
            ret += s[i] - '0';
        }
    }
    return ret;
}
int main() {
    cout << cal("XXXXXXXXXXXX") << endl;
    cout << cal("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << cal("7115XXX548/279-X53") << endl;
    cout << cal("532/4362X179-41447/5") << endl;
    return 0;
}
