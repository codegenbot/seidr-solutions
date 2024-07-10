#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    for (char c : input) {
        if (c == '|') {
            if (!firstInFrame) {
                if (score + 1 < 10) {
                    score += 10 - score - 1;
                } else {
                    score += 10 - score;
                }
            }
            firstInFrame = true;
        } else if (c == 'X') {
            score += 10;
            firstInFrame = true;
        } else if (c == '-') {
            if (!firstInFrame) {
                if (score + 1 < 10) {
                    score += 10 - score - 1;
                } else {
                    score += 10 - score;
                }
            }
            firstInFrame = true;
        } else {
            int pins = c - '0';
            if (!firstInFrame) {
                if (score + pins < 10) {
                    score += 10 - score - pins;
                } else {
                    score += 10 - score;
                }
            } else {
                score += pins;
            }
            firstInFrame = false;
        }
    }
    return score;
}