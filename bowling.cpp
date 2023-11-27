#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            rolls[roll] = 10;
            roll++;
            if (frame < 10) {
                rolls[roll] = 0;
                roll++;
            }
        } else if (c == '/') {
            rolls[roll] = 10 - rolls[roll - 1];
            roll++;
        } else if (c == '-') {
            rolls[roll] = 0;
            roll++;
        } else {
            rolls[roll] = c - '0';
            roll++;
        }

        if (frame < 10 && (c == 'X' || roll % 2 == 0)) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
            if (rolls[i * 2 + 2] == 10) {
                score += rolls[i * 2 + 4];
            }
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            score += 10 + rolls[i * 2 + 2];
        } else {
            score += rolls[i * 2] + rolls[i * 2 + 1];
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