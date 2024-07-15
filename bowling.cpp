#include <string>
#include <iostream>

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
            score += currentScore;
            currentScore = 0;
            inFrame = false;
            currentRolls = 0;
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter a string representing the individual bowls: ";
    std::cin >> input;
    int result = bowlingScore(input);
    std::cout << "The score is: " << result << std::endl;
    return 0;
}