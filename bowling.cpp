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
    cin >> s;
    int score = 0, bonus = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            bonus += 2;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            bonus += 1;
        } else if (s[i] == '-') {
            bonus = 0;
        } else {
            score += s[i] - '0';
            bonus = max(0, bonus - 1);
        }
        if (bonus) score += s[i] - '0';
    }
    cout << score << endl;
    return 0;
}
