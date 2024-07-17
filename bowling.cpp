#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    bool inFrame = false;
    int currentFrame = 1;
    int currentRolls = 0;
    int currentRoll = 0;

    for (char c : input) {
        if (c == '/') {
            if (currentRoll > 1) {
                score += currentRoll;
                currentRoll = 0;
            }
            inFrame = false;
            currentFrame++;
            currentRolls = 2;
        } else if (isdigit(c)) {
            currentRoll = currentRoll * 10 + c - '0';
            currentRolls--;
            if (!inFrame) {
                inFrame = true;
            }
            if (currentRolls == 0) {
                score += currentRoll;
                currentRoll = 0;
            }
        } else if (c == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            currentRolls = 0;
            inFrame = false;
            currentFrame++;
        }
    }

    return score;
}

int main() {
    std::cout << bowlingScore("0") << std::endl; // output: 0
    std::cout << bowlingScore("XXXXXXXXXXXX") << std::endl; // output: 300
    std::cout << bowlingScore("5/5/5/5/5/5/5/5/5/5/5") << std::endl; // output: 150
    std::cout << bowlingScore("7115XXX548/279-X53") << std::endl; // output: 145
    std::cout << bowlingScore("532/4362X179-41447/5") << std::endl; // output: 100

    return 0;
}