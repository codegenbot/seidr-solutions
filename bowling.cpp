#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    bool spare = false;
    bool strike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                strike = true;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 10) {
                spare = true;
            }
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (spare) {
                score += c - '0';
                spare = false;
            }
            if (strike) {
                score += c - '0';
                strike = false;
            }
        }

        if (strike) {
            roll++; // additional roll for strike
        }
        roll++;
        
        if (roll == 2 || strike) {
            frame++;
            roll = 0;
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