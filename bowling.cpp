```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                if (currentRolls == 2 && s[0] != 'x' && s[1] != 'x') {
                    score += 10 + (s[0] - '0') + (s[1] - '0');
                } else if (currentRolls == 1) {
                    score += (s[0] - '0') * 2;
                }
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;
}