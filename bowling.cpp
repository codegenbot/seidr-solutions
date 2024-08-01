#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (10 - (s[s.find(c) - 1] - '0')) - (10 - (s[s.find(c) + 1] - '0'));
            frame++;
        } else {
            int pins = c - '0';
            if (frame < 9 && s[s.find(c) + 1] == '/') {
                score += 10 - pins;
                frame++;
            } else {
                score += pins;
                frame++;
            }
        }
    }
    return score;