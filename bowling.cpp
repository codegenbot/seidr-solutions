#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int roll = 1;
    int prevRoll = 0;
    int prevPrevRoll = 0;
    bool strike = false;
    bool spare = false;

    for (char ch : input) {
        if (ch == 'X') {
            score += 10;
            if (frame < 10) {
                score += (prevRoll == 10) ? (prevRoll + prevPrevRoll) : (prevRoll);
                prevPrevRoll = prevRoll;
                prevRoll = 10;
                frame++;
                roll = 1;
            }
        } else if (ch == '/') {
            score += (10 - prevRoll);
            if (frame < 10) {
                score += (prevRoll == 10) ? (prevRoll + prevPrevRoll) : (prevRoll);
                prevPrevRoll = prevRoll;
                prevRoll = 10 - prevRoll;
                frame++;
                roll = 1;
            }
        } else if (ch == '-') {
            if (frame < 10) {
                score += (prevRoll == 10) ? (prevRoll + prevPrevRoll) : (prevRoll);
                prevPrevRoll = prevRoll;
                prevRoll = 0;
                frame++;
                roll = 1;
            }
        } else {
            int pins = ch - '0';
            score += pins;
            if (frame < 10) {
                if (roll == 1) {
                    prevRoll = pins;
                    roll++;
                } else {
                    score += (prevRoll == 10) ? (prevRoll + prevPrevRoll) : (prevRoll);
                    prevPrevRoll = prevRoll;
                    prevRoll = pins;
                    frame++;
                    roll = 1;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}