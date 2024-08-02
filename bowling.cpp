#include <vector>
#include <string>

int bowlingScore(string bowled) {
    int score = 0;
    int currentFrame = 1;
    int strikes = 0;

    for (int i = 0; i <= bowled.size() - 1; i++) {
        if (bowled[i] == 'X') {
            score += 10 + (10 * (currentFrame < 10));
            currentFrame++;
            strikes++;
        } else if (bowled[i] == '/') {
            int firstRoll = bowled[i - 1] - '0';
            int secondRoll = bowled[i + 1] - '0';
            score += (firstRoll + secondRoll);
            currentFrame++;
        } else {
            int roll = bowled[i] - '0';
            if (currentFrame < 10) {
                score += roll;
                if (strikes == 2 || i > 18) continue;
                for (int j = i; j < bowled.size() - 1 && j <= 18; j++) {
                    if (bowled[j] != '/') break;
                }
                if (j - i > 1) {
                    int nextTwoRolls = (bowled[j - 1] - '0') + (bowled[j] - '0');
                    score += roll * 2 + nextTwoRolls;
                    currentFrame++;
                    i = j;
                } else {
                    score += roll * 2;
                    currentFrame++;
                }
            } else continue;
        }
    }

    return score;
}