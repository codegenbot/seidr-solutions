#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    for (char c : input) {
        if (c == '/') {
            score += rollCount * 10;
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += rollCount;
    return score;
}