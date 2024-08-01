#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
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
                for (int i = 1; i <= 3 - currentFrame; i++) {
                    if (s.length() > currentFrame*2 + i && s[currentFrame*2 + i] == '/') {
                        score += 10 - (26 - (currentFrame * 2));
                        break;
                    }
                    else {
                        pins++;
                    }
                }
            }
        }
    }
    return score;
}