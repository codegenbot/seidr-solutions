#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                if (currentRolls == 2) {
                    score += 10 + getPreviousTwoRolls(s, currentFrame);
                    currentFrame++;
                    currentRolls = 0;
                } else {
                    score += 10 - (10 - (int)(c - '0') * 10);
                    currentFrame++;
                    currentRolls = 0;
                }
            } else {
                break;
            }
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;
}

int getPreviousTwoRolls(std::string s, int frame) {
    int total = 0;
    for (int i = 0; i < frame * 2 - 1; i++) {
        if (s[i] == '/') {
            break;
        }
        total += s[i] - '0';
    }
    return total;
}