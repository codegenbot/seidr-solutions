#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10 && currentRolls == 2) {
                score += 10;
            } else if (currentRolls == 1) {
                score += 10 - '0';
            }
            currentRolls = 0;
            if (c == '/') currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;
}