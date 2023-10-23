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
int fs(string& s, int i)
{
    int base = s[i] - 48;
    switch (s[i + 1])
    {
        case '-': return 0;
        case '/': return 10 - base;
        case 'X': return 10;
    }
    switch (s[i + 2])
    {
        case '-': return base;
        case '/': return 10 + (s[i + 2] - s[i]);
        case 'X': return 10 + (10 - base);
    }
    return base + (s[i + 1] - s[i]);
}
int f(string& s, int idx)
{
    if (idx >= s.size()) {
        return 0;
    }
    return fs(s, idx) + f(s, idx + 2);
}
int score(string s) {
    int score = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '/' || s[i] == 'X')
        {
            int base = s[i - 1] - '0';
            if (s[i] == '/')
                score += 10 - base;
            else
                score += 10;
            if (flag)
                score += base;
            flag = true;
        }
        else if (s[i] == '-')
        {
            flag = false;
        }
        else
        {
            if (flag == true)
            {
                score += s[i] - '0';
            }
            flag = false;
        }
    }
    return score;
}
int main() {
