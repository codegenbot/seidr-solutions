#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == 'X') { // Strike
            score += 10 + 10 + 10;
            firstRollInFrame = true;
        } else if (c == '/') { // Spare
            score += 10;
            firstRollInFrame = true;
        } else {
            int roll = c - '0';
            if (!firstRollInFrame) {
                if (roll == 10) { // Second roll of the frame, strike
                    score += 10 + 10;
                } else { // Second roll of the frame, non-strike
                    score += 10 + roll;
                }
            } else {
                score += roll;
                firstRollInFrame = false;
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter your bowling game (X for strike, / for spare): ";
    std::getline(std::cin, input);
    int score = bowlingScore(input);
    std::cout << "Your total score is: " << score << std::endl;
    return 0;
}