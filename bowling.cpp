```
#include <iostream>
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;
    for (auto it = s.begin(); it != s.end(); ++it) {
        char c = *it;
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the bowling scores (X for strike, / for spare): ";
    std::getline(std::cin, s);
    int result = bowlingScore(s);
    std::cout << "The total score is: " << result << std::endl;
    return 0;
}