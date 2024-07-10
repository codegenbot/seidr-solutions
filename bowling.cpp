#include <iostream>
#include <vector>
#include <sstream>

int bowlingScore(const std::string& rolls) {
    int score = 0;
    bool firstRollInFrame = true;

    for (const auto& roll : rolls) {
        if (roll == '/') {
            if (firstRollInFrame) {
                firstRollInFrame = false;
            } else {
                score += 10;
            }
        } else if (isdigit(roll)) {
            int currentRoll = roll - '0';
            if (firstRollInFrame) {
                firstRollInFrame = false;
                score += currentRoll;
            } else {
                if (currentRoll == 10) {
                    score += 10;
                } else {
                    score += currentRoll;
                }
            }
        }
    }

    return score;
}