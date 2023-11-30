#include <iostream>
#include <string>

int scoreRound(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int frameScore = 0;
    bool isSpare = false;
    bool isStrike = false;

    for (char bowl : bowls) {
        if (frame > 10) {
            break;
        }

        if (bowl == 'X') {
            score += 10;
            if (isStrike) {
                score += 10;
            }
            if (isSpare) {
                score += 10;
            }
            isStrike = true;
            isSpare = false;

            if (frame == 10) {
                frameScore++;
            }
            else {
                frameScore = 0;
                frame++;
            }
        }
        else if (bowl == '/') {
            score += 10 - frameScore;
            if (isStrike) {
                score += 10;
            }
            isSpare = true;
            isStrike = false;

            if (frame == 10) {
                frameScore %= 10;
                frameScore++;
            }
            else {
                frameScore = 0;
                frame++;
            }
        }
        else if (bowl == '-') {
            if (isStrike) {
                score += 10;
            }
            else if (isSpare) {
                score += 10 - frameScore;
            }
            else {
                score += 0;
            }

            isSpare = false;
            isStrike = false;
            frameScore++;
        }
        else {
            int pins = bowl - '0';
            score += pins;
            if (isStrike) {
                score += pins;
            }
            if (isSpare) {
                score += pins;
            }

            isSpare = false;
            isStrike = false;

            frameScore += pins;
            if (frameScore >= 10) {
                frameScore %= 10;

                if (frame == 10) {
                    frameScore++;
                }
                else {
                    frame++;
                    frameScore = 0;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);
    std::cout << scoreRound(bowls) << std::endl;
    return 0;
}