#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;

    for (int i = 0; i < input.length(); i++) {
        if (frame == 10) {
            break;
        }

        if (input[i] == 'X') {
            score += 10;

            if (i + 2 < input.length()) {
                if (input[i + 2] == '/') {
                    score += 10;
                } else if (input[i + 1] != 'X' || input[i + 2] != 'X') {
                    score += (input[i + 1] - '0') + (input[i + 2] - '0');
                }
            }

            frame++;
        } else if (input[i] == '/') {
            score += (10 - (input[i - 1] - '0'));

            if (i + 1 < input.length() && input[i + 1] != 'X' && input[i + 1] != '-') {
                score += (input[i + 1] - '0');
            }

            frame++;
        } else if (input[i] != '-') {
            score += (input[i] - '0');
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = getScore(input);
    std::cout << score << std::endl;

    return 0;
}