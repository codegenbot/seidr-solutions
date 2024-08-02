#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) {
            int roll1 = bowls[i] - '0';
            int roll2 = 0;
            if (i < 9) {
                if (isdigit(bowls[i + 1])) {
                    roll2 = bowls[i + 1] - '0';
                    i++;
                } else {
                    roll2 = 10 - roll1;
                }
            } else {
                roll2 = 10 - roll1;
            }
            score += roll1 + roll2;
        } else {
            int x = 20;
            if (i < 9) {
                if (isdigit(bowls[i + 1])) {
                    x = 10 + (bowls[i + 1] - '0');
                } else {
                    x = 10;
                }
            } else {
                x = 10;
            }
            score += x;
        }
    }
    return score;