#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 0) {
                if (currentRoll < 10) {
                    score += 10 - currentRoll;
                }
                currentRoll = 0;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    if (currentRoll > 1) {
        score += currentRoll + 10;
    } else {
        score += currentRoll;
    }
    return score;
}