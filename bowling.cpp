#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int frameIndex = 0;

    for (int i = 0; i < input.size(); ++i) {
        if (frame == 10) {
            break;
        }

        if (input[i] == 'X') {
            score += 10;

            if (frameIndex < 18) {
                if (input[i + 2] == '/') {
                    score += 10;
                } else if (input[i + 3] == '/') {
                    score += 10 - (input[i + 1] - '0');
                } else {
                    score += (input[i + 1] - '0') + (input[i + 2] - '0');
                }
            }

            frameIndex += 2;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');

            if (frameIndex < 18) {
                if (input[i + 1] == 'X') {
                    score += 10;
                } else {
                    score += (input[i + 1] - '0');
                }
            }

            frameIndex += 2;
        } else if (input[i] == '-') {
            frameIndex += 2;
        } else {
            score += (input[i] - '0');

            if (input[i + 1] == '/') {
                score += 10 - (input[i] - '0');
            }

            frameIndex++;
        }

        if (frameIndex == 19) {
            frame++;
            frameIndex = 0;
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