#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            frame++;
        } else {
            currentRolls++;
            if (currentRolls == 2) {
                score += 10 - c - '0';
                frame++;
                currentRolls = 0;
            }
        }
    }

    return score;