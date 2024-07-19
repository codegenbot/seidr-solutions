#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frame;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (isdigit(s[i - 1])) {
                roll1 = s[i - 1] - '0';
                if (isdigit(s[i + 1]))
                    roll2 = s[i + 1] - '0';
                else
                    roll2 = 10 - roll1;
                score += roll1 + roll2;
            } else {
                frame++;
                if (s[i - 1] == 'X') {
                    score += 10;
                } else if (s[i - 1] == '/') {
                    score += s[i - 1] - '0' + 10;
                } else {
                    score += s[i - 1] - '0';
                }
            }
        }
    }

    return score;
}