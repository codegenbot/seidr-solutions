#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    bool isStrike = false;
    for (char c : input) {
        if (c == '/') {
            if (rollCount >= 2) {
                score += rollCount * 10 + 10;
            } else {
                score += rollCount * 10;
            }
            rollCount = 0;
            isStrike = false;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        } else if (c == 'X') {
            score += 10 + (rollCount > 1 ? rollCount * 10 : 20);
            isStrike = true;
        } else if (c == '-') {
            if (!isStrike) {
                score += rollCount;
                isStrike = false;
            }
        }
    }
    if (rollCount >= 2 && !isStrike) {
        score += rollCount * 10;
    } else if (rollCount > 0 && isStrike) {
        score += rollCount * 10 + 10;
    }
    return score;
}

int main() {
    std::string input; // read user input here
    int result = bowlingScore(input);
    return result;
}