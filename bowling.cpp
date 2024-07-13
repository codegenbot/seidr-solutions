#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                if (currentRolls == 2) {
                    score += 10;
                } else {
                    score += 10 - currentRolls;
                }
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    // Add the last frame
    if (currentFrame == 10) {
        if (currentRolls == 2) {
            score += 10;
        } else {
            score += 10 - currentRolls;
        }
    }

    return score;
}