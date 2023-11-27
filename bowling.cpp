#include <iostream>
#include <string>

int getFrameScore(const std::string& bowls, int frameIndex) {
    int score = 0;
    int bowlIndex = frameIndex * 2;

    if (bowlIndex >= bowls.length()) {
        return score;
    }

    if (isdigit(bowls[bowlIndex])) {
        score += bowls[bowlIndex] - '0';
    }

    if (bowlIndex + 1 < bowls.length() && bowls[bowlIndex + 1] == '/') {
        score += 10 - (bowls[bowlIndex] - '0');
        if (frameIndex < 9) {
            if (isdigit(bowls[bowlIndex + 2])) {
                score += bowls[bowlIndex + 2] - '0';
            }
        } else {
            if (isdigit(bowls[bowlIndex + 2])) {
                score += bowls[bowlIndex + 2] - '0';
            }
            if (isdigit(bowls[bowlIndex + 3])) {
                score += bowls[bowlIndex + 3] - '0';
            }
        }
    } else if (bowls[bowlIndex] == 'X') {
        score = 10;
        if (frameIndex < 9) {
            if (bowlIndex + 2 < bowls.length() && bowls[bowlIndex + 2] == 'X') {
                score += 10;
                if (bowlIndex + 4 < bowls.length()) {
                    if (isdigit(bowls[bowlIndex + 4])) {
                        score += bowls[bowlIndex + 4] - '0';
                    }
                }
            } else {
                if (bowlIndex + 2 < bowls.length() && isdigit(bowls[bowlIndex + 2])) {
                    score += bowls[bowlIndex + 2] - '0';
                }
                if (bowlIndex + 3 < bowls.length() && (bowls[bowlIndex + 3] == '/' || bowls[bowlIndex + 1] == '/')) {
                    score += 10 - (bowls[bowlIndex + 2] - '0');
                } else if (bowlIndex + 3 < bowls.length() && isdigit(bowls[bowlIndex + 3])) {
                    score += bowls[bowlIndex + 3] - '0';
                }
            }
        } else {
            if (bowlIndex + 2 < bowls.length() && isdigit(bowls[bowlIndex + 2])) {
                score += bowls[bowlIndex + 2] - '0';
            }
            if (bowlIndex + 3 < bowls.length() && isdigit(bowls[bowlIndex + 3])) {
                score += bowls[bowlIndex + 3] - '0';
            }
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
    std::getline(std::cin, bowls);

    int roundScore = getRoundScore(bowls);
    std::cout << "Round score: " << roundScore << std::endl;

    return 0;
}