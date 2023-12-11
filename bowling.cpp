#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    bool isSpare = false;
    bool isStrike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                isStrike = true;
                frame++;
                bowl = 0;
            }
        } else if (c == '/') {
            score += 10 - (input[bowl - 1] - '0');
            if (frame < 10) {
                isSpare = true;
                frame++;
                bowl = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                bowl++;
            }
        } else {
            score += c - '0';
            if (isSpare) {
                score += c - '0';
                isSpare = false;
            }
            if (isStrike) {
                score += c - '0';
                isStrike = false;
            }
            if (frame < 10) {
                bowl++;
                if (bowl == 2) {
                    frame++;
                    bowl = 0;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = getScore(input);
    std::cout << score << std::endl;

    return 0;
}