#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentScore = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentScore < 10) {
                score += currentScore + 10 - currentScore;
            } else {
                score += currentScore;
            }
            currentScore = 0;
            currentRolls = 0;
        } else {
            currentScore += c - '0';
            currentRolls++;
        }

        if (currentRolls == 2) {
            score += currentScore;
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

int main() {
    std::string input;
    std::cin >> input;
    int result = bowlingScore(input);
    return 0;
}