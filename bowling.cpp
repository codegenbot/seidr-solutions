```
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (int i = 0; i <= s.length(); i++) {
        if (i < s.length() && s[i] == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            currentFrame++;
        } else if ((i+1) < s.length() && (s[i] == '/' || s[i] == 'X')) {
            int roll1, roll2;
            if (s[i] == '/') {
                roll1 = s[i - 1] - '0';
                roll2 = 10 - roll1;
            } else {
                roll1 = s[i] - '0';
                roll2 = 10 - roll1;
            }
            score += roll1 + roll2;
            currentRolls = 0;
            currentFrame++;
        } else if (i < s.length()) {
            int roll = s[i] - '0';
            currentRolls++;

            if (currentRolls == 2) {
                if (s[i-1] == 'X' && s[i-2] == 'X') {
                    score += 30;
                } else if (s[i-1] == '/') {
                    int roll3 = 10 - (s[i-1] - '/');
                    score += 10 + roll;
                } else {
                    score += roll * 2;
                }
                currentRolls = 0;
                currentFrame++;
            }
        }
    }

    return score;
}