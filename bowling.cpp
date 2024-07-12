```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame > 9) return -1;
            if (rollsLeftInFrame == 2 && s[i+1] != 'X') {
                score += 10 - (s[i-1] - '0');
            }
            currentFrame++;
            rollsLeftInFrame = 2;
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
            rollsLeftInFrame--;
        } else {
            int currentRoll = s[i] - '0';
            score += currentRoll;
            rollsLeftInFrame--;
        }
    }

    return score;
}