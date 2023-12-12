#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < bowls.size(); i++) {
        char bowl = bowls[i];

        if (frame > 10) {
            break;
        }

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                if (bowls[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += (bowls[i + 1] - '0') + (bowls[i + 2] - '0');
                }
            }

            frame++;
        } else if (bowl == '/') {
            score += (10 - (bowls[i - 1] - '0'));

            if (frame < 10) {
                score += (bowls[i + 1] - '0');
            }

            frame++;
        } else {
            score += (bowl - '0');

            if (frame < 10 && (bowlIndex % 2 == 1 || bowl == '-')) {
                frame++;
            }
        }

        bowlIndex++;
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