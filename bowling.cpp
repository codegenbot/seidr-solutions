```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (currentFrame < 9) {
                if (s[currentFrame*2] == 'X' || s[currentFrame*2] == '/') {
                    strike = true;
                }
            } else {
                score += 10;
            }
            currentFrame++;
        } else if (c == '/') {
            int pins = 10 - (currentFrame == 1 ? 10 : s[currentFrame*2-2]-'0');
            score += pins;
            currentFrame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (currentFrame < 10) {
                if (s[currentFrame*2] == 'X' || s[currentFrame*2] == '/') {
                    strike = true;
                } else {
                    score += s[currentFrame*2-1]-'0';
                }
            }
            currentFrame++;
        }
    }

    return score;
}