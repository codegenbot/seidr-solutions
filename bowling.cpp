#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10 + (i < 8 ? 10 : 0);
            lastRoll = true;
        } else if (s[i] == '/') { // Spare
            int j = i + 1;
            while(j < 11 && s[j] != 'X' && s[j] != '/')
                j++;
            score += 10 - (s[j-1] - '0');
            lastRoll = true;
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            if (lastRoll) {
                return -1; // Invalid input
            }
            score += roll1 + roll2;
            lastRoll = false;
            if (roll1 + roll2 == 10) { // Next two rolls are not part of this frame
                i++;
            }
        }
    }

    return score;
}