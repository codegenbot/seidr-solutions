#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            strike = true;
        } else if (c == '/') {
            score += 10;
            strike = false;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (strike) {
                score += 10 + pins * 2;
                strike = false;
            } else {
                score += pins;
            }
        }
    }
    return score;