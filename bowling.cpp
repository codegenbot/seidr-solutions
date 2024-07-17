#include <string>
#include <cctype>

int bowlingScore(const std::string& frames) {
    int score = 0;
    int currentRolls = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
        } else if (std::isdigit(c)) {
            int roll = c - '0';
            currentRolls++;
            if (currentRolls > 1) {
                while (currentRolls < 2) {
                    score += roll;
                    currentRolls++;
                }
                currentRolls = 0;
            }
        }
    }
    return score;
}