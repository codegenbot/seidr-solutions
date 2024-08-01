```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10 + ((currentFrame < 10 && s[i+1] != '/') ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int prevRoll = s[i-2] - '0';
            int nextRoll = s[i-1] - '0';
            score += prevRoll + nextRoll;
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            if (currentFrame < 10) {
                score += roll;
                if (s[i+1] == '/') {
                    currentFrame++;
                }
            } else {
                score += roll;
            }
        }
    }
    return score;
}