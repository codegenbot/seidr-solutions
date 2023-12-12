#include <iostream>
#include <string>

int calculateScore(std::string bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            rolls[roll] = 10;
            roll++;
        } else if (c == '/') {
            rolls[roll] = 10 - rolls[roll - 1];
            roll++;
        } else if (c >= '0' && c <= '9') {
            rolls[roll] = c - '0';
            roll++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[frame - 1] == 10) {
            score += 10 + rolls[frame] + rolls[frame + 1];
            frame++;
        } else if (rolls[frame - 1] + rolls[frame] == 10) {
            score += 10 + rolls[frame + 1];
            frame += 2;
        } else {
            score += rolls[frame - 1] + rolls[frame];
            frame += 2;
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}