#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char currentBowl = bowls[bowlIndex];

        if (currentBowl == 'X') {
            score += 10;

            if (frame < 10) {
                char nextBowl = bowls[bowlIndex + 1];
                char nextNextBowl = bowls[bowlIndex + 2];

                if (nextBowl == 'X') {
                    score += 10;
                    if (nextNextBowl == 'X') {
                        score += 10;
                    } else {
                        score += (nextNextBowl - '0');
                    }
                } else if (nextBowl == '/') {
                    score += 10;
                } else {
                    score += (nextBowl - '0');
                    if (nextNextBowl == '/') {
                        score += (10 - (nextBowl - '0'));
                    }
                }
            } else {
                char nextBowl = bowls[bowlIndex + 1];
                char nextNextBowl = bowls[bowlIndex + 2];

                if (nextBowl == 'X') {
                    score += 10;
                } else if (nextBowl == '/') {
                    score += 10;
                } else {
                    score += (nextBowl - '0');
                    if (nextNextBowl == '/') {
                        score += (10 - (nextBowl - '0'));
                    }
                }
            }

            frame++;
            bowlIndex++;
        } else if (currentBowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));

            if (frame < 10) {
                char nextBowl = bowls[bowlIndex + 1];
                score += (nextBowl - '0');
            }

            frame++;
            bowlIndex++;
        } else {
            score += (currentBowl - '0');
            frame++;
            bowlIndex++;
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}