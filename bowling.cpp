```
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
                if (s[2 + s.find(c)] == 'X' || s[3 + s.find(c)] == '/') {
                    score += 10;
                }
            }
        }
    }
    return score;
}