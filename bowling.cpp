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
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            bowlIndex++;
        } else {
            score += (bowl - '0');
        }

        bowlIndex++;
        frame++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << "The score of the round is: " << score << std::endl;

    return 0;
}