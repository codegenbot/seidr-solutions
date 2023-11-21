#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < input.length(); i++) {
        char bowl = input[i];

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            }

            frame++;
        } else if (bowl == '/') {
            score += (10 - (input[i - 1] - '0'));

            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            }

            frame++;
            bowlIndex = 0;
        } else if (bowl == '-') {
            bowlIndex++;
        } else {
            score += (bowl - '0');
            bowlIndex++;

            if (bowlIndex == 2) {
                frame++;
                bowlIndex = 0;
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}