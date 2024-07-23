#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int roll1, roll2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + 10;
            frame++;
        } else if (isdigit(s[i])) {
            if (s[i+1] == '/') {
                roll1 = s[i] - '0';
                score += 10 - roll1;
                i++;
            } else {
                roll1 = roll2 = s[i] - '0';
                score += roll1 + roll2;
            }
            frame++;
        } else if (s[i] == '/') {
            roll1 = roll2 = s[i-1] - '0';
            if (roll1 + 5 < 10) {
                score += 10;
            } else {
                score += roll1 + 10;
            }
            frame++;
        }
    }
    return score;