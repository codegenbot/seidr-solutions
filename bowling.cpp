#include <iostream>
#include <string>

int scoreOfRound(std::string round) {
    int score = 0;
    int frame = 0;
    int roll = 0;

    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += calculateBonusScore(round, roll + 1, 2);
            }
            frame++;
            roll = 0;
        } else if (c == '/') {
            score += 10 - getNumericValue(round[roll - 1]);
            if (frame < 9) {
                score += calculateBonusScore(round, roll + 1, 1);
            }
            frame++;
            roll = 0;
        } else {
            score += getNumericValue(c);
            roll++;
            if (roll == 2) {
                frame++;
                roll = 0;
            }
        }
    }

    return score;
}

int getNumericValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return 0;
}

int calculateBonusScore(const std::string& round, int start, int count) {
    int bonusScore = 0;
    for (int i = start; i < start + count; i++) {
        bonusScore += getNumericValue(round[i]);
    }
    return bonusScore;
}

int main() {
    std::string round;
    std::getline(std::cin, round);

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}