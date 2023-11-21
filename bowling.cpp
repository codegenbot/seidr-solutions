#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    bool spare = false;
    bool strike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                if (spare) {
                    score += 10;
                }
                strike = true;
                frame++;
                bowl = 0;
            }
        } else if (c == '/') {
            score += 10 - (input[bowl - 1] - '0');
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                spare = true;
                frame++;
                bowl = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                if (spare) {
                    score += 10;
                }
                frame++;
                bowl = 0;
            }
        } else {
            score += c - '0';
            if (frame < 10) {
                if (strike) {
                    score += c - '0';
                }
                if (spare) {
                    score += c - '0';
                    spare = false;
                }
                bowl++;
                if (bowl == 2) {
                    frame++;
                    bowl = 0;
                }
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