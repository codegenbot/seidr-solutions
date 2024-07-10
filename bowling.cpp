#include <vector>
#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool previousStrike = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (previousStrike ? 10 : 0);
            previousStrike = true;
            roll++;
        } else if (c == '/') {
            int thisRoll = 10 - roll;
            score += thisRoll;
            previousStrike = false;
            roll++;
        } else {
            int pins = c - '0';
            score += pins + (previousStrike ? 10 : 0);
            previousStrike = false;
            roll++;
        }
    }

    return score;
}

int main() {
    std::cout << bowlingScore("X|9-7/4-6/|25+") << std::endl;
    return 0;
}