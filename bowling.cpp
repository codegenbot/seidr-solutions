#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - (roll == 1 ? 10 : 20));
            }
            roll = 0;
        } else if (isdigit(c)) {
            int strike = c - '0';
            roll++;
            if (c != 'X') {
                score += strike;
            }
        }
    }
    return score;