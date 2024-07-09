#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, prevRoll = -1;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            roll1 = roll2 = s[i] - '0';
            if (i + 2 <= s.length() && s[i+1] == '/') {
                roll2 = s[i+2] - '0';
                i++;
            }
            if (prevRoll == 10) {
                score += roll1;
            } else if (roll1 + roll2 > 10) {
                score += 10;
            } else {
                score += roll1 + roll2;
            }
        } else {
            prevRoll = s[i] - '0';
            if (s[i] == 'X') {
                score += 10;
            } else if (s[i] == '/') {
                score += prevRoll;
            }
        }
    }

    return score;
}