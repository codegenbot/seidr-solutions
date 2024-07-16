#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int rolls = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            rolls++;
            if (frame < 10) {
                score += 10;
            }
        } else if (c == '/') {
            int firstRoll = s[rolls] - '0';
            int secondRoll = s[rolls + 1] - '0';
            score += firstRoll + secondRoll;
            rolls += 2;
            frame++;
        } else {
            int roll = c - '0';
            score += roll;
            rolls++;
            if (frame < 10) {
                if (s[rolls] == '/') {
                    score -= roll;
                }
            }
            frame++;
        }
    }
    return score;