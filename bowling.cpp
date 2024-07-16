#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 10;
            spare = true;
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            roll = 10 - firstRoll;
            score += firstRoll + roll;
            spare = false;
        } else {
            int currentRoll = s[i] - '0';
            if (!spare) {
                score += currentRoll;
                roll = currentRoll;
            } else {
                score += currentRoll + roll;
                spare = false;
            }
        }
    }
    return score;
}