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
int getScore(string input, int start) {
    if (input[start] == 'X') {
        return 10 + getScore(input, start + 1) + getScore(input, start + 2);
    } else if (input[start] == '/') {
        return 10 - (input[start - 1] - '0') + getScore(input, start + 1);
    } else if (input[start] == '-') {
        return 0;
    } else {
        return input[start] - '0';
    }
}

int getScore(string input) {
    int ans = 0;
    for (int i = 0; i < input.size(); i++) {
        ans += getScore(input, i);
        if (input[i] == 'X') {
            i += 2;
        } else if (input[i] == '/') {
            i += 1;
        }
    }
    return ans;
}

int main() {
    cout << getScore("XXXXXXXXXXXX") << endl;
    cout << getScore("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << getScore("7115XXX548/279-X53") << endl;
    cout << getScore("532/4362X179-41447/5") << endl;
    return 0;
}
