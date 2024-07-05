#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10;
            currentFrame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (currentFrame < 10) {
                if ((s.length() > s.find(c) + 2 && s[s.find(c) + 1] == 'X') || (s.length() > s.find(c) + 1 && s[s.find(c) + 1] == '/')) {
                    score += 10;
                }
            }
        }
    }
    return score;