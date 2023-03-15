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
    string s;
    cin>>s;
    int res = 0;
    int idx = 0;
    while(idx < s.size()) {
        if(s[idx] == 'X') {
            res += 10;
            if(s[idx+2] == 'X') res += 10;
            else res += s[idx+2] - '0';
            if(s[idx+4] == 'X') res += 10;
            else if(s[idx+4] == '/') res += 10 - (s[idx+2] - '0');
            else res += s[idx+4] - '0';
            idx++;
        }
        else if(s[idx] == '/') {
            res += 10 - (s[idx-1] - '0');
            if(s[idx+2] == 'X') res += 10;
            else if(s[idx+2] == '/') res += 10 - (s[idx+1] - '0');
            else res += s[idx+2] - '0';
            idx += 2;
        }
        else {
            res += s[idx] - '0';
            idx++;
        }
    }
    cout<<res<<endl;
    return 0;
}
