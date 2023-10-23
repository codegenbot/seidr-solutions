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
    cin >> input;
    stack<int> sta;
    int res = 0, sum = 0;
    for (int i = 0; i < input.length(); ++ i) {
        if (input[i] == 'X') {
            if (sta.size() >= 2) {
                int a = sta.top();
                sta.pop();
                int b = sta.top();
                sta.pop();
                res += a * 2 + b;
            }
            res += 10;
            sum = res;
        } else if (input[i] == '/') {
            if (sta.size() >= 1) {
                int a = sta.top();
                res += 10 - a;
                sta.pop();
            }
            res += 10;
            sum = res;
        } else if (input[i] == '-') {
            res += 0;
            sum = res;
        } else {
            int a = input[i] - '0';
            sum += a;
            res += a;
            sta.push(a);
        }
    }
    cout << res;
}
