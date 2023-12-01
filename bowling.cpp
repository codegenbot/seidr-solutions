#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    bool spare = false;
    bool strike = false;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            roll = 0;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                strike = true;
                frame++;
            }
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                spare = true;
                frame++;
            }
        } else if (c == '-') {
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                frame++;
            }
        } else {
            score += c - '0';
            roll++;
            if (frame < 10) {
                if (spare && roll == 1) {
                    score += c - '0';
                    spare = false;
                }
                if (strike && roll == 1) {
                    score += c - '0';
                    strike = false;
                }
                if (roll == 2) {
                    frame++;
                    roll = 0;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::getline(std::cin, bowls);

    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;

    return 0;
}