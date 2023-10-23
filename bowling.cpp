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
    string str;
    while(cin >> str) {
        if(str.size() == 0) continue;
        int i = 0, ret = 0;
        for(int j = 0;j < 10;j++) {
            int s = 0;
            if(str[i] == 'X') {
                i++;
                s += 10;
                if(str[i] == 'X') {
                    i++;
                    s += 10;
                    if(str[i] == 'X') {
                        s += 10;
                        i++;
                    } else s += str[i] - '0';
                } else if(str[i] == '-') {
                    i++;
                    if(str[i] == 'X') s += 10;
                    else s += str[i] - '0';
                    i++;
                } else {
                    s += str[i] - '0';
                    i++;
                    if(str[i] == '/') {
                        s += (10 - str[i-1] + '0');
                        i++;
                    }
                }
            } else {
                if(str[i] != '-') s += str[i] - '0';
                if(str[i+1] == '/') {
                    s += (10 - str[i] + '0');
                    i += 2;
                } else {
                    if(str[i+1] != '-') s += str[i+1] - '0';
                    i += 2;
                }
            }
            ret += s;
        }
        cout << ret << endl;
    }
}
