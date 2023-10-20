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
https://www.careercup.com/question?id=5748337039642624

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
int score(string s) {
    int sum = 0;
    int i = 0;
    for (int frame = 0; frame < 10; frame++) {
        char c = s[i++];
        if (c == 'X') {
            sum += 10;
            sum += s[i++] == 'X' ? 10 : (s[i - 1] - '0');
            sum += s[i++] == 'X' ? 10 : (s[i - 1] - '0');
        } else if (c == '/') {
            sum += 10;
            sum += (10 - (s[i - 2] - '0'));
            sum += s[i++] == 'X' ? 10 : (s[i - 1] - '0');
        } else {
            sum += c - '0';
            if (s[i] == '/') {
                sum += 10 - (c - '0');
                i++;
            } else {
                sum += s[i++] - '0';
            }
        }
    }
    return sum;
}

int main() {
    cout << score("XXXXXXXXXXXX") << endl;
    cout << score("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << score("7115XXX548/279-X53") << endl;
    cout << score("532/4362X179-41447/5") << endl;
    return 0;
}
