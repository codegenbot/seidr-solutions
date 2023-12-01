#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < bowls.size(); i++) {
        if (frame > 10) {
            break;
        }

        char bowl = bowls[i];

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1])) ? (bowls[i + 1] - '0') : 0;
                score += (bowls[i + 2] == 'X') ? 10 : (isdigit(bowls[i + 2])) ? (bowls[i + 2] - '0') : 0;
            }

            frame++;
        } else if (isdigit(bowl)) {
            score += (bowl - '0');

            if (frame < 10 && (bowlIndex % 2 == 0 || bowls[i - 1] != '/')) {
                if (bowl == '0' && i + 1 < bowls.size() && bowls[i + 1] == '/') {
                    score += 10;
                } else if (i + 1 < bowls.size() && isdigit(bowls[i + 1])) {
                    score += (bowls[i + 1] - '0');
                }
            }

            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[i - 1] - '0'));

            if (frame < 10) {
                score += (isdigit(bowls[i + 1])) ? (bowls[i + 1] - '0') : 0;
            }

            frame++;
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