#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += (10 - (s[roll] - '0')) * 2;
            roll+=2;
        } else {
            score += (int)c - 48;
            roll++;
        }
    }
    return score;
}