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
    cin>>input;
    int res = 0;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'X') {
            // if(i == 9 || i == 19 || i == 29) res += 10;
            if(i < 9 || i > 19 && i < 29)
                res += getScore(input, i + 2) + 10;
            if(i == 9 || i == 19 || i == 29)
                res += 10;
        } else if(input[i] == '/') {
            res += 10 - (input[i - 1] - '0');
            // if(i == 9 || i == 19 || i == 29) res += 10 - (input[i - 1] - '0');
            if(i < 9 || i > 19 && i < 29)
                res += getScore(input, i + 1);
        } else if(input[i] == '-') {
            res += 0;
        } else {
            res += input[i] - '0';
        }
    }
    cout<<res<<endl;
    return 0;
}

int getScore(string input, int index) {
    if(input[index] == 'X') return 10;
    if(input[index] == '/') return 10 - (input[index - 1] - '0');
    return input[index] - '0';
}
