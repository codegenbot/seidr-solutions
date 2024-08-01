#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (26 - (currentFrame * 2));
            currentFrame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                for (int i = 1; i <= 3; i++) {
                    if (s[currentFrame*2 + i] == '/') {
                        score += 10 - (26 - (currentFrame * 2));
                        break;
                    }
                    else {
                        pins++;
                    }
                }
            }
            currentFrame++;
        }
    }
    return score;
}