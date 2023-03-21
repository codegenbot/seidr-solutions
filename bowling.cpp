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
    int score = 0;
    int frame = 0;
    int strike = 0;
    int spare = 0;
    int strike_count = 0;
    int spare_count = 0;
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
            if (strike_count == 1) {
                score += 10;
                strike_count--;
            }
            if (spare_count == 1) {
                score += 10;
                spare_count--;
            }
            strike_count++;
            frame++;
        }
        else if (input[i] == '/') {
            score += 10 - spare;
            spare = 0;
            if (strike_count == 1) {
                score += 10 - spare;
                strike_count--;
            }
            spare_count++;
            frame++;
        }
        else if (input[i] == '-') {
            frame++;
        }
        else {
            score += input[i] - '0';
            if (spare_count == 1) {
                score += input[i] - '0';
                spare_count--;
            }
            if (strike_count == 1) {
                score += input[i] - '0';
                strike_count--;
            }
            spare = input[i] - '0';
            frame++;
        }
    }
    cout << score << endl;
    return 0;
}
