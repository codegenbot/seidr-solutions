#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int frameScore = 0;
    bool isSpare = false;
    bool isStrike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += 10;
                isStrike = true;
            }
        } else if (c == '/') {
            score += 10 - frameScore;
            if (frame < 10) {
                isSpare = true;
            }
        } else if (c == '-') {
            // do nothing, skip the character
        } else {
            score += c - '0';
            frameScore += c - '0';
        }

        if (isSpare) {
            score += c - '0';
            isSpare = false;
        }

        if (isStrike) {
            score += c - '0';
            frameScore += c - '0';
            isStrike = false;
        }

        if (frameScore == 10) {
            frameScore = 0;
            frame++;
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