#include <vector>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    bool firstRollInFrame = true;
    int currentFrame = 1;

    for (char c : input) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - currentFrame;
                currentFrame++;
                firstRollInFrame = false;
            } else {
                score += 10;
                currentFrame++;
                firstRollInFrame = true;
            }
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (firstRollInFrame) {
                score += roll;
                if (roll == 10) {
                    currentFrame++;
                    firstRollInFrame = false;
                }
            } else {
                if (currentFrame < 10 && roll + getFirstRollOfNextFrame(input, currentFrame) >= 10) {
                    score += 10 - currentFrame;
                    currentFrame++;
                    firstRollInFrame = true;
                } else {
                    score += roll;
                    currentFrame++;
                    firstRollInFrame = false;
                }
            }
        }
    }

    return score;
}

int getFirstRollOfNextFrame(const std::string& input, int frame) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '/') {
            if (frame + 1 == i / 2 + 1) {
                return input[i - 1] - '0';
            }
        }
    }

    return 0;
}