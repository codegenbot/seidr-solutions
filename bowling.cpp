#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll > 0) {
                score += roll;
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        } else if (c == 'X') {
            score += 10 + (roll > 0 ? roll : 0);
            roll = 0;
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;