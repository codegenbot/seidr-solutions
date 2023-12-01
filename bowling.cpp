#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int index = 0;

    while (frame <= 10 && index < input.length()) {
        if (input[index] == 'X') {
            score += 10;
            if (input[index + 2] == 'X') {
                score += 10;
                if (input[index + 4] == 'X') {
                    score += 10;
                } else if (input[index + 4] == '/') {
                    score += 10 - (input[index + 3] - '0');
                } else {
                    score += input[index + 4] - '0';
                }
            } else if (input[index + 2] == '/') {
                score += 10;
            } else {
                score += input[index + 2] - '0';
                if (input[index + 3] == '/') {
                    score += 10 - (input[index + 2] - '0');
                }
            }
            index += 2;
        } else if (input[index + 1] == '/') {
            score += 10;
            if (input[index + 2] == 'X') {
                score += 10;
            } else {
                score += input[index + 2] - '0';
            }
            index += 3;
        } else {
            score += input[index] - '0';
            score += input[index + 1] - '0';
            index += 2;
        }
        frame++;
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