#include <string>

int bowlingScore(string str) {
    int score = 0;
    int currentRoll = 0;

    for (char c : str) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10 + (c - '0');
        } else {
            currentRoll++;
        }
    }
    return score;