#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1 = 0, roll2 = 0, currentFrame = 1;

    for (char c : s) {
        if (c != '/') {
            if (c == 'X') {
                score += 30;
                currentFrame++;
            } else if (c >= '1' && c <= '9') {
                int val = c - '0';
                roll1 = val;

                if (currentFrame < 10) {
                    // If we're in the last two frames, 
                    // and there's no strike or spare
                    score += val;
                } else if (currentFrame == 10) {
                    currentFrame++;
                }
            } else if (c == '-') {
                score += roll1 + roll2;
                currentFrame++;
                roll1 = 0;
                roll2 = 0;
            } else {
                int val = c - '0';
                roll2 = val;
                if (currentFrame < 10) {
                    score += roll1 + roll2;
                    currentFrame++;
                    roll1 = 0;
                    roll2 = 0;
                }
            }
        }
    }

    return score;
}