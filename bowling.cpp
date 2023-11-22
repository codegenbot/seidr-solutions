#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (c == '/') {
            rolls[frame] = 10 - rolls[frame-1];
            frame++;
            roll = 0;
        } else if (c == '-') {
            rolls[frame] = 0;
            frame++;
            roll = 0;
        } else {
            rolls[frame] += c - '0';
            roll++;
            if (roll == 2) {
                frame++;
                roll = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i+1] + rolls[i+2];
        } else if (rolls[i] + rolls[i+1] == 10) {
            score += 10 + rolls[i+2];
        } else {
            score += rolls[i] + rolls[i+1];
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