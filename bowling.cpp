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

void helper(string& str, int& res) {
    switch(str[0]) {
        case 'X': res += 10;  break;
        case '/': res += 10 - (str[-1] - '0'); break;
        default: res += str[0] - '0';
    }
}


int cal(string str) {
    int res = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'X' || str[i] == '/') {
            int count = 0;
            while(str[i + count] == 'X' || str[i + count] == '/') count++;
            for(int j = 0; j < count; j++){
                helper(str[i + j], res);
            }
            i = i + count - 1;
        }
        else res += str[i] - '0';
    }
    return res;
}

int main() {
