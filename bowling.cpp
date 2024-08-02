#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + max(roll, 1);
            roll = 0;
        } else {
            int points = c - '0';
            score += points;
            roll++;
            if (roll == 2) {
                score += max(points * 2, 10);
                roll = 0;
            }
        }
    }
    return score;