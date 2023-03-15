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
    string line;
    while (getline(cin, line)) {
        int score = 0;
        int pre = 0;
        int pre_pre = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == 'X') {
                score += 10;
                if (pre == 10) {
                    score += 10;
                    if (pre_pre == 10) {
                        score += 10;
                    }
                }
                pre_pre = pre;
                pre = 10;
            }
            else if (line[i] == '/') {
                score += 10 - pre;
                if (pre == 10) {
                    score += 10;
                    if (pre_pre == 10) {
                        score += 10;
                    }
                }
                pre_pre = pre;
                pre = 10 - pre;
            }
            else if (line[i] == '-') {
                pre_pre = pre;
                pre = 0;
            }
            else {
                int cur = line[i] - '0';
                score += cur;
                pre_pre = pre;
                pre = cur;
            }
        }
        cout << score << endl;
    }
    return 0;
}
