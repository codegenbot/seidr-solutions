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

int score(char c)
{
    switch (c) {
        case '-': return 0;
        case 'X': return 10;
        case '/': return 10;
        default: return c-'0';
    }
}

int bowling(string s) {
    int res = 0;
    int i = 0;

    while (i < s.size()) {
        char c = s[i];
        int sc = score(c);
        i++;
        if (c == 'X') {
            sc += score(s[i]) + score(s[i+1]);
        } else if (c == '/') {
            sc += score(s[i]);
        }
        if (c == 'X' || c == '/') {
            i++;
        }
        res += sc;
    }
    return res;
}


int main() {
    cout << bowling("XXXXXXXXXXXX") << endl;
    cout << bowling("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << bowling("7115XXX548/279-X53") << endl;
    cout << bowling("532/4362X179-41447/5") << endl;
    return 0;
}
