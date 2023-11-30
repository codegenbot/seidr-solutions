#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int roll = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[roll + 1] == 'X') ? 10 : (input[roll + 1] - '0');
                score += (input[roll + 2] == 'X') ? 10 : (input[roll + 2] == '/' ? (10 - (input[roll + 1] - '0')) : (input[roll + 2] - '0'));
            }
            roll++;
        } else if (c == '/') {
            score += (10 - (input[roll - 1] - '0'));
            if (frame < 9) {
                score += (input[roll + 1] == 'X') ? 10 : (input[roll + 1] - '0');
            }
            roll++;
        } else if (c == '-') {
            // do nothing
        } else {
            score += (c - '0');
            if (frame < 9 && roll % 2 == 1) {
                if (c == '0') {
                    score += (input[roll - 1] == '/') ? 10 : 0;
                } else {
                    score += (input[roll - 1] == '/') ? (10 - (c - '0')) : 0;
                }
            }
            roll++;
        }

        if (roll % 2 == 0) {
            frame++;
        }

        if (frame == 10) {
            break;
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