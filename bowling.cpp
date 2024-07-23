#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            if (currentFrame == 10) {
                score += 10 + firstRoll;
            } else if (firstRoll + secondRoll >= 10) {
                score += 10 + (firstRoll + secondRoll - 10);
            } else {
                score += firstRoll + secondRoll;
            }
            currentFrame++;
        }
    }
    return score;