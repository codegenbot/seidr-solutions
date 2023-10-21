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
int calScore(string str) {
    if (str.size() != 22) {
        return -1;
    }
    int ans = 0;
    int i = 0;
    while (i < 22) {
        if (str[i] == 'X') {
            ans += 10;
            if (i < 18) {
                if (str[i + 2] == '/') {
                    ans += 10;
                } else {
                    ans += (str[i + 2] - '0');
                }
                if (str[i + 4] == '/') {
                    ans += 10;
                } else if (str[i + 4] == 'X') {
                    ans += 10;
                    if (str[i + 6] == '/') {
                        ans += 10;
                    } else if (str[i + 6] == 'X') {
                        ans += 10;
                    } else {
                        ans += (str[i + 6] - '0');
                    }
                } else {
                    ans += (str[i + 4] - '0');
                }
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            ans += (str[i] - '0');
            if (str[i + 1] == '-') {
            }
            else {
                if (str[i + 1] == '/') {
                    ans += (10 - (str[i] - '0'));
                } else {
                    ans += (str[i + 1] - '0');
                }
            }
        }
        i += 2;
    }
    return ans;
}

int main() {
    string input1 = "XXXXXXXXXXXX";
    cout << calScore(input1) << endl;
    string input2 = "5/5/5/5/5/5/5/5/5/5/5";
    cout << calScore(input2) << endl;
    string input3 = "7115XXX548/279-X53";
    cout << calScore(input3) << endl;
    string input4 = "532/4362X179-41447/5";
    cout << calScore(input4) << endl;
    return 0;
}
