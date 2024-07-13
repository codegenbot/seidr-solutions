#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                if (currentRolls == 2) {
                    score += 10 + (currentFrame < 9 ? bowlingScore(s.substr(currentFrame * 3, currentFrame == 9 ? 1 : 2)) : 0);
                } else {
                    score += 10 - currentRolls;
                }
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            if (currentRolls == 2) {
                score += (c - '0') * 10;
            } else {
                score += c - '0';
            }
        }
    }

    return score;
}