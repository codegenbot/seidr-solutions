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
    string input;
    while (cin >> input) {
        int ans = 0;
        int frame = 1;
        int idx = 0;
        while (frame <= 10) {
            if (input[idx] == 'X') {
                ans += 10;
                if (input[idx + 1] == 'X') {
                    ans += 10;
                    if (input[idx + 2] == 'X') {
                        ans += 10;
                    } else {
                        ans += input[idx + 2] - '0';
                    }
                } else {
                    ans += input[idx + 1] - '0';
                    if (input[idx + 2] == '/') {
                        ans += 10;
                    } else {
                        ans += input[idx + 2] - '0';
                    }
                }
                frame++;
                idx++;
            } else if (input[idx + 1] == '/') {
                ans += 10;
                if (input[idx + 2] == 'X') {
                    ans += 10;
                } else {
                    ans += input[idx + 2] - '0';
                }
                frame++;
                idx += 2;
            } else if (input[idx] == '-') {
                frame++;
                idx++;
            } else {
                ans += input[idx] - '0';
                frame++;
                idx++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
