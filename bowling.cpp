#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowlIndex = 0;

    while (frame < 10) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            bowlIndex += 1;
        } else if (bowl == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            bowlIndex += 2;
        } else {
            score += (bowl - '0');
            if (bowlIndex + 1 < bowls.size()) {
                score += (bowls[bowlIndex + 1] == '/') ? (10 - (bowl - '0')) : (bowls[bowlIndex + 1] - '0');
            }
            bowlIndex += 2;
        }

        frame++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = getScore(bowls);
    std::cout << score << std::endl;

    return 0;
}