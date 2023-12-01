#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            }

            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));

            if (frame < 10) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            }

            bowlIndex++;
        } else {
            score += (bowl - '0');

            if (frame < 10 && (bowl - '0') + (bowls[bowlIndex + 1] - '0') == 10) {
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            }

            bowlIndex++;
        }

        if (bowl == 'X' || bowlIndex % 2 == 0) {
            frame++;
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the string representing the individual bowls: ";
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;

    return 0;
}