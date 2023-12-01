#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += 10;
                frame++;
                roll = 0;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 10) {
                score += 10;
                frame++;
                roll = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                frame++;
                roll = 0;
            }
        } else {
            score += c - '0';
            if (frame < 10) {
                if (roll > 0) {
                    score += c - '0';
                }
                if (frame > 1 && roll == 0 && bowls[frame*2 - 2] == '/') {
                    score += c - '0';
                }
                roll++;
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
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}