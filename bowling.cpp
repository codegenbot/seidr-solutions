```cpp
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
                if (currentRolls > 0) {
                    score += 10 - currentRolls;
                }
            }
            currentRolls = 0;
            if (currentFrame < 10) {
                currentFrame++;
            }
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            if (c == 'X') {
                score += 10;
            } else {
                score += c - '0';
            }
        }
    }

    for (; currentFrame < 11; ++currentFrame) {
        if (s[2 * currentFrame - 2] == '/' && s[2 * currentFrame - 1] >= '1' && s[2 * currentFrame - 1] <= '9') {
            score += 10 + (s[2 * currentFrame - 1] - '0');
        } else if (s[2 * currentFrame - 2] == '/' && s[2 * currentFrame - 1] == 'X') {
            score += 10 + 10;
        } else if (s[2 * currentFrame - 2] == '/') {
            score += 10;
        }
    }

    return score;
}