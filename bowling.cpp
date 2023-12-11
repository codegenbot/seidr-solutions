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
                if (bowls[bowlIndex + 2] == '/') {
                    score += 10;
                } else {
                    score += (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0');
                }
            }
            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));
            if (frame < 10 && bowls[bowlIndex + 1] == 'X') {
                score += 10;
            } else {
                score += (bowls[bowlIndex + 1] - '0');
            }
            bowlIndex += 2;
        } else {
            score += (bowl - '0');
            if (frame < 10 && bowls[bowlIndex + 1] == '/') {
                score += 10 - (bowl - '0');
            }
            bowlIndex++;
        }
        frame++;
    }
    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the bowls: ";
    std::cin >> bowls;
    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;
    return 0;
}