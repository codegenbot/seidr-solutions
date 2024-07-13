```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10;
            } else {
                score += 10 - currentRolls;
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            if (currentFrame < 10) {
                if (c == 'X') {
                    score += 10;
                    currentRolls = 2;
                }
                else if (currentRolls == 2) {
                    score += (int)(c - '0') * 2;
                } else {
                    score += (int)(c - '0');
                }
            }
        }
    }

    return score;
}