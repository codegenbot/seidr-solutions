#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int previousRoll = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (c == '/') {
            score += previousRoll + 10 - currentRoll;
            currentRoll = 0;
        } else {
            int roll = (int)(c - '0');
            currentRoll += roll;

            if (currentRoll == 10) {
                score += 10;
                currentRoll = 0;
            }
        }

        previousRoll = currentRoll;
    }

    return score;