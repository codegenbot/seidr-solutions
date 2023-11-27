#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int prevRoll = 0;
    bool strike = false;
    bool spare = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                strike = true;
                frame++;
                roll = 0;
            }
        } else if (c == '/') {
            score += 10 - prevRoll;
            if (frame < 10) {
                if (strike) {
                    score += 10 - prevRoll;
                }
                spare = true;
                frame++;
                roll = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                roll++;
                if (strike) {
                    score += 0;
                }
                if (spare) {
                    score += 0;
                }
            }
        } else {
            int pins = c - '0';
            score += pins;
            if (frame < 10) {
                if (strike) {
                    score += pins;
                }
                if (spare) {
                    score += pins;
                }
                if (roll == 0) {
                    prevRoll = pins;
                }
                roll++;
                if (roll == 2) {
                    roll = 0;
                    frame++;
                }
                strike = false;
                spare = false;
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    int score = calculateScore(input);
    std::cout << score << std::endl;
    return 0;
}