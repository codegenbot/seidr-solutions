#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls > 0) {
                score += 10 - currentRolls;
            }
            currentRolls = 0;
            if (currentFrame < 10) {
                currentFrame++;
            }
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    for (; currentFrame < 10; currentFrame++) {
        if (currentRolls == 2) {
            score += 10;
        } else {
            score += currentRolls * 10 + 10;
        }
        currentRolls = 0;
    }

    return score;
}