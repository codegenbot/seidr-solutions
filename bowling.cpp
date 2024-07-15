#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentScore = 0;
    int currentRolls = 0;

    for (char c : s) {
        if (c == '/') {
            currentRolls++;
        } else {
            currentScore += c - '0';
            if (currentRolls >= 2) {
                score += currentScore + 10;
                currentScore = 0;
                currentRolls = 0;
            }
        }

        if (currentRolls == 2) {
            if (currentScore < 10) {
                score += 10 - currentScore;
            } else {
                score += currentScore;
            }
            currentScore = 0;
            currentRolls = 0;
        }
    }

    if (currentScore > 0 || currentRolls > 0) {
        if (currentScore < 10) {
            score += 10 - currentScore;
        } else {
            score += currentScore;
        }
    }

    return score;