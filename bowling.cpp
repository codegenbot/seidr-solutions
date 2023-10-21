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
    int len = s.size();
    int sum = 0, i = 0;
    while (i + 2 <= len) {
        if (s[i] == 'X') {
            sum += 10;
            if (s[i + 2] == 'X') sum += 10;
            else sum += s[i + 2] - '0';
            if (s[i + 3] != '/') sum += s[i + 3] - '0';
            else sum += 10 - (s[i + 1] - '0');
            i += 1;
        } else if (s[i + 1] == '/') {
            sum += 10;
            if (s[i + 2] == 'X') sum += 10;
            else sum += s[i + 2] - '0';
            i += 2;
        } else {
            sum += s[i] - '0';
            sum += s[i + 1] - '0';
            i += 2;
        }
    }
    while (i < len) {
        sum += s[i] - '0';
        i++;
    }
    return sum;
}
int main() {
