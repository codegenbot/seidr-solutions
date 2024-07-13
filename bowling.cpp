#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                if (currentRolls == 2) {
                    score += 10;
                } else {
                    score += 10 - (10 - (int)(c - '0') * 10);
                }
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            if (currentFrame < 10) {
                score += c - '0';
            } else {
                int nextRoll = c - '0';
                if (nextRoll + currentRolls > 10) {
                    score += 10;
                } else {
                    score += currentRolls + nextRoll;
                }
                break;
            }
        }
    }

    return score;
}