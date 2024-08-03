#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : input) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentFrame++;
        } else if (c == '/') { // spare
            score += 10 + 10 - 2;
            currentFrame++;
        } else { // normal roll
            int roll = c - '0';
            score += roll;
            currentRolls++;

            if (currentRolls == 2) {
                if (currentFrame < 9 && input[currentFrame * 2] != 'X' && input[currentFrame * 2] != '/') {
                    score -= 2; // subtract 2 from previous frame
                }
                currentFrame++;
                currentRolls = 0;
            }
        }
    }

    return score;
}