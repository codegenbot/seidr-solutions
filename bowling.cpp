```cpp
#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int currentFrame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame > 1 ? 10 : 0);
            currentRoll++;
            if (currentRoll >= 2) {
                currentFrame++;
                currentRoll = 0;
            }
        } else if (s[i] == '/') {
            int nextChar = s[i+1];
            score += 10 - (nextChar - '0');
            i++; // skip '/'
            currentRoll++;
            if (currentRoll >= 2) {
                currentFrame++;
                currentRoll = 0;
            }
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll++;

            if (currentRoll == 2 && s[i+1] != 'X') {
                i++; // skip '/'
                int nextChar = s[i] - '0';
                score += nextChar;
                currentRoll++;
            }

            if (currentFrame >= 10 || (currentRoll >= 2 && s[i+1] == '/')) {
                currentFrame++;
                currentRoll = 0;
            }
        }
    }

    return score;
}