#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 1;

    for (char c : s) {
        if (c == 'X') { 
            score += 10 + nextRollValue(s, currentFrame);
            currentFrame++;
            rollsLeftInFrame = 1;
        } else if (c == '/') { 
            score += 10 - nextRollValue(s, currentFrame) + nextRollValue(s, currentFrame);
            currentFrame++;
            rollsLeftInFrame = 0;
        } else {
            int rollValue = c - '0';
            score += rollValue;

            if (rollsLeftInFrame == 1) { 
                currentFrame++;
                rollsLeftInFrame = 2; 
            } else { 
                rollsLeftInFrame--;
            }
        }
    }

    return score;
}

int nextRollValue(string s, int frameNumber) {
    for (char c : s) {
        if (c == '/') {
            continue;
        }
        if (c == 'X' || (frameNumber > 1 && c - '0' + nextRollValue(s, frameNumber) >= 10)) {
            return 10;
        }
        return c - '0';
    }
    return 0;
}