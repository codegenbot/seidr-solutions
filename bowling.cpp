#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bonus = 0;
    bool spare = false;
    bool strike = false;

    for (char ch : input) {
        if (ch == 'X') {
            score += 10;
            if (frame < 10) {
                score += bonus;
                bonus = 10;
                strike = true;
                frame++;
            }
        } else if (ch == '/') {
            score += 10 - bowl;
            if (frame < 10) {
                score += bonus;
                bonus = 10;
                spare = true;
                frame++;
            }
        } else if (ch == '-') {
            if (frame < 10) {
                score += bonus;
                bonus = 0;
                frame++;
            }
        } else {
            score += ch - '0';
            if (frame < 10) {
                score += bonus;
                bonus = 0;
                if (spare) {
                    score += ch - '0';
                    spare = false;
                }
                if (strike) {
                    score += ch - '0';
                    strike = false;
                }
                bowl++;
                if (bowl == 2) {
                    bowl = 0;
                    frame++;
                }
            }
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