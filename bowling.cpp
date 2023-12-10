#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    bool isSpare = false;
    bool isStrike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += 10;
                isStrike = true;
                roll = 0;
                frame++;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 10) {
                score += 10 - roll;
                isSpare = true;
                roll = 0;
                frame++;
            }
        } else if (c == '-') {
            roll = 0;
            if (isSpare) {
                score += 10;
                isSpare = false;
            } else if (isStrike) {
                score += 10;
                isStrike = false;
            }
        } else {
            int pins = c - '0';
            score += pins;
            roll = pins;
            if (isSpare) {
                score += pins;
                isSpare = false;
            } else if (isStrike) {
                score += pins;
                isStrike = false;
            }

            if (frame < 10 && roll == 0) {
                frame++;
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> input;

    int score = getScore(input);
    std::cout << "Score: " << score << std::endl;

    return 0;
}