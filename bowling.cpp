#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int spare = 0;
    int strike = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                strike++;
                roll = 0;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 10) {
                spare++;
                roll = 0;
            }
        } else if (c >= '0' && c <= '9') {
            score += c - '0';
            if (frame < 10) {
                roll++;
                if (roll == 2) {
                    roll = 0;
                    frame++;
                }
            }
        } else if (c == '-') {
            if (frame < 10) {
                roll++;
                if (roll == 2) {
                    roll = 0;
                    frame++;
                }
            }
        }
        
        if (spare > 0) {
            score += c - '0';
            spare--;
        }

        if (strike > 0) {
            score += c - '0';
            strike--;
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