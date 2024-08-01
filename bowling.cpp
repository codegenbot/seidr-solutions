#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    bool strike = false;
    for (char c : input) {
        if (c == 'X') {
            score += 10 + (strike ? 10 : 0);
            strike = true;
        } else if (c == '/') {
            score += (strike ? 10 : (c - '0' * 2));
            strike = false;
        } else {
            score += c - '0';
        }
    }
    return score;
}