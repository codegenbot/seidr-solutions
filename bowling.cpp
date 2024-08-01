#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll * 10);
            roll++;
        } else {
            int currentRoll = stoi(string(1, c)) * 10;
            if (roll < 2) {
                score += currentRoll;
                roll++;
            } else {
                if (currentRoll + 10 <= 30) {
                    score += currentRoll + 10;
                    roll++;
                } else {
                    score += 30 - (10 - (currentRoll % 10));
                    roll++;
                }
            }
        }
    }
    return score;