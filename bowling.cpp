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
    cin>>str;
    int score = 0;
    int frame = 0;
    int temp = 0;
    bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'X') {
            frame++;
            if (flag) {
                temp += 10;
                score += temp;
            }
            score += 10;
            if (str[i + 2] == 'X') {
                score += 10;
                if (str[i + 4] == 'X') {
                    score += 10;
                } else {
                    score += str[i + 4] - '0';
                }
            } else {
                score += str[i + 2] - '0';
            }
            if (str[i + 1] == 'X') {
                score += 10;
            } else if (str[i + 1] == '/') {
                score += (10 - str[i] - '0');
            } else {
                score += str[i + 1] - '0';
            }
            temp = 0;
            flag = false;
        } else if (str[i] == '/') {
            frame++;
            if (flag) {
                temp += 10;
                score += temp;
            }
            score += 10 + (10 - str[i - 1] - '0');
            temp = 0;
            flag = false;
        } else if (str[i] == '-') {
            frame++;
            if (flag) {
                temp += 10;
                score += temp;
            }
            temp = 0;
            flag = false;
        } else {
            temp += str[i] - '0';
            flag = true;
        }
    }
    if (frame < 10) {
        score += temp;
    }
    cout<<score<<endl;
    return 0;
}
