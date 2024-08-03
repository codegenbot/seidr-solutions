#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
            continue;
        }
        if (isdigit(c)) {
            int pins = c - '0';
            if (!strike) {
                if (currentFrame < 10 && s[currentFrame*2-1] != '/') {
                    score += pins;
                    currentFrame++;
                } else if (s[currentFrame*2-1] == '/') {
                    score += 10 - pins;
                    currentFrame++;
                }
            } else {
                strike = false;
                score += 10 + pins;
            }
        }
    }

    for (; currentFrame < 10; currentFrame++) {
        if (!strike) {
            char c = s[currentFrame*2-1];
            if (c == 'X') {
                score += 10;
            } else if (isdigit(c)) {
                int pins = c - '0';
                score += pins;
            }
        } else {
            strike = false;
            score += 10;
        }
    }

    return score;
}