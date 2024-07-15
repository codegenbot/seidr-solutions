#include <string>
#include <algorithm>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentScore = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentScore + (currentRolls == 1 ? 10 : 0) < 10) {
                score += currentScore + 10 - currentScore;
            } else {
                score += currentScore;
            }
            currentScore = 0;
            currentRolls = 0;
        } else if (c >= '0' && c <= '9') {
            currentScore += c - '0';
            currentRolls++;
        }

        if (currentRolls == 2) {
            score += std::min(currentScore + 10, 10);
            currentScore = 0;
            currentRolls = 0;
        }
    }

    if (currentScore > 0 || currentRolls > 0) {
        if (currentScore < 10) {
            score += currentScore + 10 - currentScore;
        } else {
            score += currentScore;
        }
    }

    return score;
}