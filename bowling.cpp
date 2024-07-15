#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;
    int currentScore = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
            currentRolls++;
        } else {
            if (!inFrame) {
                currentScore += c - '0';
            } else {
                currentScore += c - '0' + (currentRolls > 1);
            }
        }

        if (currentRolls == 2) {
            if (currentScore >= 10) {
                score += 10;
            } else {
                score += currentScore;
            }
            currentScore = 0;
            inFrame = false;
            currentRolls = 0;
        }
    }

    return score;
}