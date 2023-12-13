#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int bowl = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[bowl + 1] == 'X') ? 10 : (input[bowl + 1] - '0');
                score += (input[bowl + 2] == 'X') ? 10 : (input[bowl + 2] == '/' ? (10 - (input[bowl + 1] - '0')) : (input[bowl + 2] - '0'));
            }
            frame++;
            bowl++;
        }
        else if (c == '/') {
            score += (10 - (input[bowl - 1] - '0'));
            if (frame < 9) {
                score += (input[bowl + 1] == 'X') ? 10 : (input[bowl + 1] - '0');
            }
            frame++;
            bowl++;
        }
        else if (c == '-') {
            // do nothing
        }
        else {
            score += (c - '0');
            if (frame < 9 && bowl % 2 == 1) {
                if (input[bowl - 1] == '/') {
                    score += (c - '0');
                }
            }
            bowl++;
            if (bowl % 2 == 0) {
                frame++;
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