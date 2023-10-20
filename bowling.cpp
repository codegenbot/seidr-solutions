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
int cal(const char *s, int len) {
    int ans = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] == '/') {
            ans += 10;
            if(i > 0) {
                ans += s[i - 1] - '0';
            }
            if(i < len - 1) {
                ans += s[i + 1] - '0';
            }
        } else if(s[i] == 'X') {
            ans += 10;
            if(i < len - 1) {
                ans += s[i + 1] - '0';
            }
            if(i < len - 2) {
                ans += s[i + 2] - '0';
            }
        } else {
            ans += s[i] - '0';
        }
    }
    return ans;
}
int solve(const char *s) {
    int ans = 0, len = strlen(s);
    if(s[0] == '-') {
        return 0;
    }
    for(int i = 0; i < len;) {
        if(s[i] == 'X') {
            ans += 10;
            if(i < len - 1) {
                ans += s[i + 1] - '0';
            }
            if(i < len - 2) {
                ans += s[i + 2] - '0';
            }
            i++;
        } else if(s[i] == '/') {
            ans += 10;
            if(i > 0) {
                ans += s[i - 1] - '0';
            }
            if(i < len - 1) {
                ans += s[i + 1] - '0';
            }
            i++;
        } else {
            ans += s[i] - '0';
            i++;
        }
    }
    return ans;
}
int main() {
    char s[100];
    while(scanf("%s", s) != EOF) {
        printf("%d\n", solve(s));
    }
    return 0;
}
