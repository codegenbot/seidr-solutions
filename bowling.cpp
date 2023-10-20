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
    cin >> input;
    int frame = 1;
    int index = 0;
    int score = 0;
    while (frame <= 10 && index < input.length()) {
        if (input[index] == 'X') {
            score += 10;
            if (input[index + 1] == 'X') {
                score += 10;
                if (input[index + 2] == 'X') {
                    score += 10;
                } else {
                    score += input[index + 2] - '0';
                }
            } else if (input[index + 2] == '/') {
                score += 10;
            } else {
                score += input[index + 1] - '0';
                score += input[index + 2] - '0';
            }
            index++;
        } else if (input[index + 1] == '/') {
            score += 10;
            if (input[index + 2] == 'X') {
                score += 10;
            } else {
                score += input[index + 2] - '0';
            }
            index += 2;
        } else {
            score += input[index] - '0';
            score += input[index + 1] - '0';
            index += 2;
        }
        frame++;
    }
    cout << score << endl;
    return 0;
}
