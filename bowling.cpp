#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (frame == 10 && roll >= 21) break;

        if (c == 'X') {
            rolls[roll++] = 10;
            if (frame < 10) {
                rolls[roll++] = 0;
            }
        } else if (c == '/') {
            rolls[roll++] = 10 - rolls[roll - 2];
        } else if (c == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = c - '0';
        }

        if (c == 'X' && frame < 10) {
            frame++;
        } else if (roll % 2 == 0) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[(i + 1) * 2] + rolls[(i + 1) * 2 + 1];
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            score += 10 + rolls[(i + 1) * 2];
        } else {
            score += rolls[i * 2] + rolls[i * 2 + 1];
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