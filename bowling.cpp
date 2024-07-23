#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int currentRolls = 0;
    int frameNumber = 1;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 + getRemaining(c, input);
            currentRolls = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (currentRolls < 2) {
                score += roll;
                currentRolls++;
            } else {
                if (roll == 10) {
                    score += 10;
                    currentRolls = 0;
                } else {
                    score += getRemaining(c, input);
                    currentRolls = 0;
                }
            }
        }

        if (frameNumber == 10) break;

        frameNumber++;
    }

    return score;
}

int getRemaining(char c, std::string input) {
    int i = 1;
    while (input.find(std::to_string(c)) != input.size() - i) {
        i++;
    }
    return 10 - i + (input[input.size() - i] - '0');
}