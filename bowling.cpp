```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            int spare = 10 - '0';
            score += spare;
            currentFrame++;
        } else if (isdigit(c)) {
            int strike = c - '0';
            score += strike;
            if (currentFrame < 10) {
                char nextChar = s[s.length() - 1];
                if (isdigit(nextChar) || nextChar == '/') {
                    if (nextChar == 'X') {
                        score += 10;
                    } else {
                        int bonus = c - '0';
                        score += bonus;
                    }
                    break;
                } else {
                    if (c == 'X' || (c >= '1' && c <= '9')) {
                        currentFrame++;
                    }
                }
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        } else if (c == '-') {
            continue;
        }
    }
    return score;
}