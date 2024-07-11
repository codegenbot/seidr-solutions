#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10 + (i < 8 ? 10 : 0);
            lastRoll = true;
        } else if (s[i] == '/') { // Spare
            score += 10;
            lastRoll = true;
        } else {
            int roll1 = s[i] - '0';
            if (lastRoll) {
                return -1; // Invalid input
            }
            score += roll1;
            lastRoll = false;
            if (s[i + 1] == 'X') {
                i++;
            } else if (s[i + 1] == '/') {
                i++;
                score += 10 - roll1;
            } else {
                int roll2 = s[i + 1] - '0';
                score += roll1 + roll2;
            }
        }
    }

    return score;