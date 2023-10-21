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

int score(string s) {
    int score = 0;
    int frame = 0;
    int frame_score = 0;
    int frame_score_2 = 0;
    int frame_score_3 = 0;
    int frame_score_4 = 0;
    int frame_score_5 = 0;
    int frame_score_6 = 0;
    int frame_score_7 = 0;
    int frame_score_8 = 0;
    int frame_score_9 = 0;
    int frame_score_10 = 0;
    int frame_score_11 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            frame_score = 10;
            frame++;
        } else if (s[i] == '/') {
            frame_score = 10 - frame_score;
            frame++;
        } else if (s[i] == '-') {
            frame_score = 0;
            frame++;
        } else {
            frame_score += s[i] - '0';
            if (frame_score == 10) {
                frame++;
            }
        }
        if (frame == 1) {
            frame_score_1 = frame_score;
        } else if (frame == 2) {
            frame_score_2 = frame_score;
        } else if (frame == 3) {
            frame_score_3 = frame_score;
        } else if (frame == 4) {
            frame_score_4 = frame_score;
        } else if (frame == 5) {
            frame_score_5 = frame_score;
        } else if (frame == 6) {
            frame_score_6 = frame_score;
        } else if (frame == 7) {
            frame_score_7 = frame_score;
        } else if (frame == 8) {
            frame_score_8 = frame_score;
        } else if (frame == 9) {
            frame_score_9 = frame_score;
        } else if (frame == 10) {
            frame_score_10 = frame_score;
        } else if (frame == 11) {
            frame_score_11 = frame_score;
        }
        if (frame == 1) {
            score = frame_score_1;
        } else if (frame == 2) {
            score = frame_score_1 + frame_score_2;
        } else if (frame == 3) {
            score = frame_score_1 + frame_score_2 + frame_score_3;
        } else if (frame == 4) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4;
        } else if (frame == 5) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5;
        } else if (frame == 6) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6;
        } else if (frame == 7) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6 + frame_score_7;
        } else if (frame == 8) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6 + frame_score_7 + frame_score_8;
        } else if (frame == 9) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6 + frame_score_7 + frame_score_8 + frame_score_9;
        } else if (frame == 10) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6 + frame_score_7 + frame_score_8 + frame_score_9 + frame_score_10;
        } else if (frame == 11) {
            score = frame_score_1 + frame_score_2 + frame_score_3 + frame_score_4 + frame_score_5 + frame_score_6 + frame_score_7 + frame_score_8 + frame_score_9 + frame_score_10 + frame_score_11;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}
