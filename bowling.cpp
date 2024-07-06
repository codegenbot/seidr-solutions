#include <string>

int bowlingScore(string input) {
    int score = 0;
    int roll = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += (10 - ('5' - c)) * (roll > 1 ? 2 : 1);
            roll++;
        } else {
            score += (10 - ('0' - c)) * (roll > 1 ? 2 : 1);
            roll++;
        }
    }
    return score;