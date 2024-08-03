#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (currentFrame < 9) {
                strike = true;
                continue;
            }
        }
        else if(c == '/') {
            if (!strike) {
                score += 10 - ('0' - c);
            } else {
                strike = false;
            }
        }
        else if (isdigit(c)) {
            int pins = c - '0';
            if (!strike) {
                score += pins;
                if (currentFrame < 10 && s[currentFrame*2-1] == '/') {
                    currentFrame++;
                }
            } 
            else {
                strike = false;
                score += 10 + pins;
            }
        }
        currentFrame++;
    }

    return score;
}