#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int ballIndex = 0;

    for (int i = 0; i < input.size(); ++i) {
        if (frame > 10) {
            break;
        }

        if (input[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            }
            ballIndex++;
            frame++;
        } else if (input[i] == '/') {
            score += (10 - (input[i - 1] - '0'));
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            ballIndex += 2;
            frame++;
        } else if (input[i] == '-') {
            ballIndex++;
        } else {
            score += (input[i] - '0');
            ballIndex++;
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