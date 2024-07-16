#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            lastRoll = true;
        } else if (s[i] == '/') {
            int roll1 = s[i-1] - '0';
            int roll2 = s[i+1] - '0' - '0';
            score += roll1 + roll2;
            lastRoll = false;
        } else {
            int roll = s[i] - '0';
            if (lastRoll) {
                score += 10 + roll;
            } else {
                score += roll;
            }
        }
    }

    return score;