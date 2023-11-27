#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int ballIndex = 0;

    for (int i = 0; i < bowls.length(); i++) {
        if (frame > 10) {
            break;
        }

        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += (10 - (bowls[i - 1] - '0'));
            score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            frame++;
        } else {
            score += (bowls[i] - '0');
            if (ballIndex == 0) {
                ballIndex = 1;
            } else {
                ballIndex = 0;
                frame++;
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;

    return 0;
}