#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    bool firstRollInFrame = true;
    
    for (char c : input) {
        if (c == 'X') { // Strike, add 10 + next frame's score
            score += 10;
            continue;
        } else if (c == '/') { // Spare, add 10 - last roll in previous frame
            int prevRoll = input[input.size() - 1] - '0';
            score += 10 - prevRoll;
            firstRollInFrame = true;
        } else {
            int currentRoll = c - '0';
            if (firstRollInFrame) { // First roll in the frame
                if (input.size() > input.find(c) + 1 && input[input.size() - 1] == '/') { // Spare, save for next frame
                    score += currentRoll;
                    firstRollInFrame = false;
                } else {
                    score += currentRoll;
                }
            } else { // Second roll in the frame
                if (c != '0') { // Not a gutter ball, add to score
                    score += currentRoll;
                }
            }
        }
    }
    
    return score;
}