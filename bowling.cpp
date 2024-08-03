#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        }
        else if (c == '/') {
            continue;
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
    }

    for (int i = currentFrame; i <= 10; i++) {
        if (s[i*2-1] != '/') {
            int pins = s.substr(i*2-1, 1) - '0';
            if (i == 10 && s[i*2] == 'X') {
                score += 10 + 10;
            }
            else if (i == 10) {
                score += 10 + pins;
            } 
            else {
                score += pins;
            }
        }
    }

    return score;
}