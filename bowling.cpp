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
#include <algorithm>
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
int to_int(char c) {
    if (c == 'X') {
        return 10;
    } else if (c == '-') {
        return 0;
    } else if (c == '/') {
        return 10;
    } else {
        return c-'0';
    }
}
int get_score(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        
        if (s[i] == '/') {
            sum += 10 - to_int(s[i-1]);
        } else if (s[i] == 'X') {
            if (i < s.length()-1 && s[i+1] == 'X') {
                sum += to_int(s[i]) + to_int(s[i+1])+to_int(s[i+2]);
            } else {
                sum += to_int(s[i]) + to_int(s[i+1]) + to_int(s[i-1]);
            }
        } else {
            sum += to_int(s[i]);
        }
    }
    return sum;
}
int main() {
    cout << get_score("XXXXXXXXXXXX") << endl;
    cout << get_score("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << get_score("7115XXX548/279-X53") << endl;
    cout << get_score("532/4362X179-41447/5") << endl;
    return 0;
}
