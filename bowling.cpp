#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRolls = 2;
        } else if (c == '/') { // spare
            score += 10;
            currentRolls = 2;
        } else { // normal roll
            int roll = c - '0';
            if (currentRolls == 1) {
                if (roll + currentRolls >= 10) {
                    score += 10;
                } else {
                    score += roll;
                }
                currentFrame++;
            } else {
                score += roll;
            }
            currentRolls++;
        }

        if (currentFrame > 9) {
            break;
        }
    }

    for (; currentRolls < 2; currentRolls++) {
        if (c == 'X') {
            score += 10 + 10;
        } else if (c == '/') {
            score += 10;
        } else {
            score += c - '0';
        }
    }

    return score;
}