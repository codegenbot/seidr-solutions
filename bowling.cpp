#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < 10; i++) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (bowls[bowlIndex + 2] == 'X') {
                score += 10;
                if (bowls[bowlIndex + 4] == 'X') {
                    score += 10;
                } else {
                    score += bowls[bowlIndex + 4] - '0';
                }
            } else if (bowls[bowlIndex + 2] == '/') {
                score += 10;
            } else {
                score += bowls[bowlIndex + 2] - '0';
                if (bowls[bowlIndex + 3] == '/') {
                    score += 10 - (bowls[bowlIndex + 2] - '0');
                }
            }
            bowlIndex += 2;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            if (bowls[bowlIndex + 2] == 'X') {
                score += 10;
            } else {
                score += bowls[bowlIndex + 2] - '0';
            }
            bowlIndex += 3;
        } else {
            score += bowls[bowlIndex] - '0' + bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);

    int score = getScore(bowls);
    std::cout << score << std::endl;

    return 0;
}