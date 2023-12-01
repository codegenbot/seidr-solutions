#include <iostream>
#include <string>

int getScore(const std::string& round) {
    int score = 0;
    int frame = 0;
    int rolls = 0;

    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                if (rolls == 0) {
                    score += 10;
                } else {
                    score += 10 - rolls;
                }
            }
            rolls = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - rolls;
            if (frame < 9) {
                score += 10;
            }
            rolls = 0;
            frame++;
        } else if (c == '-') {
            rolls = 0;
        } else {
            score += c - '0';
            rolls = c - '0';
            if (rolls != 10) {
                rolls = 0;
            }
            frame++;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round);

    int score = getScore(round);
    std::cout << score << std::endl;

    return 0;
}