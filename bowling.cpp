#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2, prevFrame = 0;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            roll1 = s[i] - '0';
            if (i + 2 <= s.length() && s[i+1] == '/' && isdigit(s[i+2])) {
                roll2 = s[i+2] - '0';
                score += prevFrame + roll1 + roll2;
                prevFrame = roll1 + roll2;
            } else if (i + 1 <= s.length() && s[i+1] == '/') {
                int spare = 10 - roll1;
                score += prevFrame + roll1 + spare;
                prevFrame = roll1 + spare;
            } else {
                score += prevFrame + roll1;
                prevFrame = roll1;
            }
        }
    }

    return score;