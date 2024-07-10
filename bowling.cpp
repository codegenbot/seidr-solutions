#include <string>

int bowling(std::string input) {
    int score = 0;
    int rollCount = 0;
    for (char c : input) {
        if (c == '/') {
            if (rollCount < 2) {
                int roll = std::stoi(input.substr(0, input.find('/')).substr(1));
                if (rollCount == 0) {
                    score += roll + std::stoi(input.substr(0, input.find('/')).substr(2)) ;
                } else {
                    score += roll;
                }
            }
            rollCount = 0;
        } else {
            rollCount++;
        }
    }
    return score;