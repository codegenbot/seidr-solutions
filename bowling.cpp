#include <iostream>
#include <string>

int getFrameScore(const std::string& bowls, int frameIndex) {
    int score = 0;
    int bowlIndex = frameIndex * 2;

    if (bowls[bowlIndex] == 'X') {
        score = 10;
        if (frameIndex < 9) {
            if (bowls[bowlIndex + 2] == 'X') {
                score += 10;
                if (bowls[bowlIndex + 4] == 'X') {
                    score += 10;
                } else {
                    score += bowls[bowlIndex + 4] - '0';
                }
            } else {
                score += bowls[bowlIndex + 2] - '0';
                if (bowls[bowlIndex + 3] == '/') {
                    score += 10 - (bowls[bowlIndex + 2] - '0');
                } else {
                    score += bowls[bowlIndex + 3] - '0';
                }
            }
        } else {
            score += bowls[bowlIndex + 2] - '0';
            score += bowls[bowlIndex + 3] - '0';
        }
    } else {
        score += bowls[bowlIndex] - '0';
        if (bowls[bowlIndex + 1] == '/') {
            score += 10 - (bowls[bowlIndex] - '0');
            if (frameIndex < 9) {
                score += bowls[bowlIndex + 2] - '0';
            } else {
                score += bowls[bowlIndex + 2] - '0';
                score += bowls[bowlIndex + 3] - '0';
            }
        } else {
            score += bowls[bowlIndex + 1] - '0';
        }
    }

    return score;
}

int getRoundScore(const std::string& bowls) {
    int roundScore = 0;

    for (int frameIndex = 0; frameIndex < 10; frameIndex++) {
        roundScore += getFrameScore(bowls, frameIndex);
    }

    return roundScore;
}

int main() {
    std::string bowls;
    std::cout << "Enter the string representing the individual bowls: ";
    std::cin >> bowls;

    int roundScore = getRoundScore(bowls);
    std::cout << "Round score: " << roundScore << std::endl;

    return 0;
}