#include <iostream>
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    std::istringstream iss(s);
    char c;
    while (iss >> c) {
        if (c == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            currentRoll += roll;
            if (iss.peek() == '/' || iss.peek() == 'X') {
                score += roll * 2;
            } else {
                score += roll;
            }
        }
    }
    return score;
}

int main() {
    std::cout << "Enter bowling scores (X for strike, / for spare, numbers for rolls):" << std::endl;
    std::string s;
    std::getline(std::cin, s);
    int result = bowlingScore(s);
    std::cout << "Your score is: " << result << std::endl;
    return 0;
}