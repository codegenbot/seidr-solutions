#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRolls = 2;
        } else if (c == '/') { // spare
            score += 10;
            currentRolls = 2;
        } else if (c >= '0' && c <= '9') {
            roll = (roll * 10) + (c - '0');
            currentRolls++;
        } else {
            if (currentRolls == 1) {
                score += roll;
            }
            if (c == 'X') { // strike
                score += 10 + 10;
                currentRolls = 2;
            } else if (c == '/') { // spare
                score += 10;
                currentRolls = 2;
            } else {
                score += roll;
                currentRolls++;
            }
            if (currentFrame < 10) {
                currentFrame++;
            }
        }
    }
    return score;
}