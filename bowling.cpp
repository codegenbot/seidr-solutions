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
7/729/XXX236/7/3
output:
137
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
133
input:
532/4362X179-41447/5
output:
100
*/
int main() {
    string b;
    cin>>b;
    int len = b.size();
    int score = 0;
    int i;
    int flag = 0;
    for(i = 0; i < len; ++i) {
        if(!flag) {
            if(b[i] == '/') {
                score += 10-(b[i-1]-'0');
                if(i+1 < len) {
                    score += b[i+1]-'0';
                }
            } else if(b[i] == 'X') {
                score += 10;
                if(i+1 < len) {
                    score += b[i+1]-'0';
                }
                if(i+2 < len) {
                    score += b[i+2]-'0';
                }
            } else if(b[i] == '-') {
                continue;
            } else {
                score += b[i]-'0';
            }
            flag = 1;
        } else {
            if(b[i] == '/') {
                score += 10-(b[i-1]-'0');
                if(i+1 < len) {
                    score += b[i+1]-'0';
                }
                flag = 0;
                continue;
            } else if(b[i] == 'X') {
                score += 10;
                if(i+1 < len) {
                    score += b[i+1]-'0';
                }
                if(i+2 < len) {
                    score += b[i+2]-'0';
                }
                flag = 0;
                continue;
            } else if(b[i] == '-') {
                score += 0;
                flag = 0;
                continue;
            } else {
                score += b[i]-'0';
                flag = 0;
            }
        }
    }
    cout << score << endl;
}
