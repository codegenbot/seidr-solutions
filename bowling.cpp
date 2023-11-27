#include <iostream>
#include <string>

int calculateScore(const std::string& bowlingRound) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int bowls[22];

    for (char c : bowlingRound) {
        if (c == 'X') {
            bowls[bowl++] = 10;
            if (frame < 9) {
                bowls[bowl++] = 0;
                frame++;
            }
        } else if (c == '/') {
            bowls[bowl++] = 10 - bowls[bowl - 1];
            if (frame < 9) {
                frame++;
            }
        } else if (c == '-') {
            bowls[bowl++] = 0;
        } else {
            bowls[bowl++] = c - '0';
            if (frame < 9) {
                if (bowl % 2 == 0) {
                    frame++;
                }
            }
        }
    }

    frame = 0;
    bowl = 0;

    for (int i = 0; i < 10; i++) {
        if (bowls[bowl] == 10) {
            score += bowls[bowl] + bowls[bowl + 1] + bowls[bowl + 2];
            bowl++;
        } else if (bowls[bowl] + bowls[bowl + 1] == 10) {
            score += bowls[bowl] + bowls[bowl + 1] + bowls[bowl + 2];
            bowl += 2;
        } else {
            score += bowls[bowl] + bowls[bowl + 1];
            bowl += 2;
        }
    }

    return score;
}

int main() {
    std::string bowlingRound;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowlingRound;

    int score = calculateScore(bowlingRound);
    std::cout << "The score of the round is: " << score << std::endl;

    return 0;
}