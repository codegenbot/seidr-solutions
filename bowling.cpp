```
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? min(roll, 10) * 2 : 0);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else {
            roll += c - '0';
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;
}