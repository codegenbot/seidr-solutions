```
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int roll = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + max(0, roll);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else {
            int num = c - '0';
            roll += num;
        }
    }

    while (roll > 0) {
        if (roll >= 10) {
            score += 10;
            roll -= 10;
        } else {
            score += roll;
            roll = 0;
        }
    }

    return score;
}