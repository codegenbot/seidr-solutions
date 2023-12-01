#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    std::size_t bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += 10;
            if (frame == 10) {
                score += (int)(bowls[bowlIndex + 1] == 'X' ? 10 : (bowls[bowlIndex + 1] - '0'));
                score += (int)(bowls[bowlIndex + 2] == 'X' ? 10 : (bowls[bowlIndex + 2] == '/' ? 10 - (bowls[bowlIndex + 1] - '0') : (bowls[bowlIndex + 2] - '0')));
            } else {
                score += (int)(bowls[bowlIndex + 1] == 'X' ? 10 : (bowls[bowlIndex + 1] == '/' ? 10 - (bowls[bowlIndex] - '0') : (bowls[bowlIndex + 1] - '0')));
                bowlIndex++;
            }
        } else if (bowl == '/') {
            score += 10 - (int)(bowls[bowlIndex - 1] - '0');
            if (frame == 10) {
                score += (int)(bowls[bowlIndex + 1] == 'X' ? 10 : (bowls[bowlIndex + 1] == '/' ? 10 - (bowls[bowlIndex] - '0') : (bowls[bowlIndex + 1] - '0')));
            }
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