#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10 + (currentFrame - 1 < s.length() && s[currentFrame - 1] >= '1' && s[currentFrame - 1] <= '9') ? (s[currentFrame - 1] - '0') * 10 : 10;
            } else if (currentRolls == 1) {
                score += 10 - (10 - (int)(c - '0') * 10);
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