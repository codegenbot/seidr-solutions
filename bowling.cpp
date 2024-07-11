```
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
        } else if (c == '/') {
            score += 5;
        } else if (c == '-') {
            continue;
        } else {
            int pins = c - '0';
            score += pins;
            if (!firstInFrame) {
                if (score + pins >= 10) {
                    score += 10 - score;
                } else {
                    score += pins;
                }
            }
            firstInFrame = false;
        }
    }
    return score;
}