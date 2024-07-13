```cpp
#include <string>
#include <stdexcept>

int main() {
    std::string input = "X X X X X X X X X X"; // provide the input string here
    int score = bowlingScore(input);
    return 0;
}

int bowlingScore(const std::string& input) {
    if (input.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll = 0;
    bool isStrike = false;

    for (int i = 0; i < input.length(); i++) {
        if (input.at(i) == 'X') {
            score += 30;
            isStrike = true;
        } else if (input.at(i) == '/') {
            if (isStrike) {
                score += prevRoll * 2;
                isStrike = false;
            } else {
                int roll1, roll2;
                char nextChar = input.at(i + 1);
                if(nextChar != ' ') {
                    roll1 = nextChar - '0';
                    score += roll1;
                }
            }
        } else if (input.at(i) == ' ') {
            int roll1, roll2;
            char prevChar = input.at(i - 1);
            if(i > 0) {
                roll1 = prevChar - '0';
                if(isStrike) {
                    score += roll1 + prevRoll * 2;
                    isStrike = false;
                } else {
                    score += roll1;
                }
                prevRoll = roll1;
            }
        } else {
            int roll = input.at(i) - '0';
            if (isStrike) {
                score += roll + prevRoll * 2;
                isStrike = false;
            } else {
                score += roll;
            }
            prevRoll = roll;
        }
    }

    return score;
}