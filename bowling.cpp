#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    for (char c : input) {
        if (c == '|') {
            if (!firstInFrame) {
                if (score >= 10) {
                    score += 10;
                } else {
                    score += 10 - score;
                }
            }
            firstInFrame = true;
        } else if (c == 'X') {
            score += 10;
            firstInFrame = false;
        } else if (isdigit(c)) {
            int pins = c - '0';
            score += pins;
            firstInFrame = false;
        } else if (c == '-') {
            firstInFrame = true;
        }
    }
    return score;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}