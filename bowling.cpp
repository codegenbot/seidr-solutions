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
    int score = 0;
    int frame = 0;
    int frameScore = 0;
    int frameScore2 = 0;
    int frameScore3 = 0;
    int frameScore4 = 0;
    int frameScore5 = 0;
    int frameScore6 = 0;
    int frameScore7 = 0;
    int frameScore8 = 0;
    int frameScore9 = 0;
    int frameScore10 = 0;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'X') {
            if(frame == 0) {
                frameScore = 10;
            } else if(frame == 1) {
                frameScore2 = 10;
            } else if(frame == 2) {
                frameScore3 = 10;
            } else if(frame == 3) {
                frameScore4 = 10;
            } else if(frame == 4) {
                frameScore5 = 10;
            } else if(frame == 5) {
                frameScore6 = 10;
            } else if(frame == 6) {
                frameScore7 = 10;
            } else if(frame == 7) {
                frameScore8 = 10;
            } else if(frame == 8) {
                frameScore9 = 10;
            } else if(frame == 9) {
                frameScore10 = 10;
            }
            frame++;
        } else if(input[i] == '/') {
            if(frame == 0) {
                frameScore = 10 - (input[i - 1] - '0');
            } else if(frame == 1) {
                frameScore2 = 10 - (input[i - 1] - '0');
            } else if(frame == 2) {
                frameScore3 = 10 - (input[i - 1] - '0');
            } else if(frame == 3) {
                frameScore4 = 10 - (input[i - 1] - '0');
            } else if(frame == 4) {
                frameScore5 = 10 - (input[i - 1] - '0');
            } else if(frame == 5) {
                frameScore6 = 10 - (input[i - 1] - '0');
            } else if(frame == 6) {
                frameScore7 = 10 - (input[i - 1] - '0');
            } else if(frame == 7) {
                frameScore8 = 10 - (input[i - 1] - '0');
            } else if(frame == 8) {
                frameScore9 = 10 - (input[i - 1] - '0');
            } else if(frame == 9) {
                frameScore10 = 10 - (input[i - 1] - '0');
            }
            frame++;
        } else if(input[i] == '-') {
            if(frame == 0) {
                frameScore = 0;
            } else if(frame == 1) {
                frameScore2 = 0;
            } else if(frame == 2) {
                frameScore3 = 0;
            } else if(frame == 3) {
                frameScore4 = 0;
            } else if(frame == 4) {
                frameScore5 = 0;
            } else if(frame == 5) {
                frameScore6 = 0;
            } else if(frame == 6) {
                frameScore7 = 0;
            } else if(frame == 7) {
                frameScore8 = 0;
            } else if(frame == 8) {
                frameScore9 = 0;
            } else if(frame == 9) {
                frameScore10 = 0;
            }
            frame++;
        } else {
            if(frame == 0) {
                frameScore = input[i] - '0';
            } else if(frame == 1) {
                frameScore2 = input[i] - '0';
            } else if(frame == 2) {
                frameScore3 = input[i] - '0';
            } else if(frame == 3) {
                frameScore4 = input[i] - '0';
            } else if(frame == 4) {
                frameScore5 = input[i] - '0';
            } else if(frame == 5) {
                frameScore6 = input[i] - '0';
            } else if(frame == 6) {
                frameScore7 = input[i] - '0';
            } else if(frame == 7) {
                frameScore8 = input[i] - '0';
            } else if(frame == 8) {
                frameScore9 = input[i] - '0';
            } else if(frame == 9) {
                frameScore10 = input[i] - '0';
            }
        }
    }
    score += frameScore;
    score += frameScore2;
    score += frameScore3;
    score += frameScore4;
    score += frameScore5;
    score += frameScore6;
    score += frameScore7;
    score += frameScore8;
    score += frameScore9;
    score += frameScore10;
    cout << score << endl;
    return 0;
}
