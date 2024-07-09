#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
        } else if (isdigit(c)) {
            score += c - '0';
        }
    }
    return score;