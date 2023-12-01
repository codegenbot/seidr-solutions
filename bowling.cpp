#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    std::size_t bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length() - 1) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            if (frame == 10 && bowls[bowlIndex + 1] != '-') {
                score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
            } else if (bowls[bowlIndex + 1] == 'X') {
                if (bowls[bowlIndex + 2] == 'X') {
                    score += 30;
                } else {
                    score += 20 + (int)(bowls[bowlIndex + 2] - '0');
                }
            } else {
                if (bowls[bowlIndex + 2] == '/' || bowls[bowlIndex + 2] == '-') {
                    score += 20;
                } else {
                    score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
                }
            }
            bowlIndex += 1;
        } else if (bowl == '/') {
            score += (10 - ((char)bowls[bowlIndex - 1] - '0')) + (int)(bowls[bowlIndex + 1] - '0');
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
    std::cout << "Enter the bowling sequence: ";
    std::getline(std::cin, bowls);

    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;

    return 0;
}