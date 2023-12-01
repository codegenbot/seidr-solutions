#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    std::size_t bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            if (frame == 10) {
                if (bowls[bowlIndex + 2] == 'X' && bowls[bowlIndex + 4] == 'X') {
                    score += 30;
                } else {
                    score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
                }
                bowlIndex += 2;
            } else {
                if (bowls[bowlIndex + 2] == 'X') {
                    score += 20;
                } else {
                    score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
                }
                bowlIndex++;
            }
        } else if (bowl == '/') {
            score += (10 + (int)(bowls[bowlIndex + 1] - '0')) - ('/' - '0');
            bowlIndex++;
        } else {
            score += (int)(bowl - '0');
        }

        frame++;
        bowlIndex++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}