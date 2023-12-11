#include <iostream>
#include <string>

int getScore(const std::string& bowlingRound) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int rolls[21] = {0};

    for (char bowl : bowlingRound) {
        if (bowl == 'X') {
            rolls[roll++] = 10;
            if (frame < 9) {
                rolls[roll++] = 0;
            }
        } else if (bowl == '/') {
            rolls[roll++] = 10 - rolls[roll - 2];
        } else if (bowl == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = bowl - '0';
        }
    }

    for (frame = 0, roll = 0; frame < 10; frame++) {
        if (rolls[roll] == 10) {
            score += 10 + rolls[roll + 1] + rolls[roll + 2];
            roll++;
        } else if (rolls[roll] + rolls[roll + 1] == 10) {
            score += 10 + rolls[roll + 2];
            roll += 2;
        } else {
            score += rolls[roll] + rolls[roll + 1];
            roll += 2;
        }
    }

    return score;
}

int main() {
    std::string bowlingRound;
    std::cin >> bowlingRound;

    int score = getScore(bowlingRound);
    std::cout << score << std::endl;

    return 0;
}