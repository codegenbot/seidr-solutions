#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRolls = 2;
        } else if (c == '/') { // spare
            score += 10 - ('0' - c);
            currentRolls = 2;
        } else { // normal roll
            int roll = c - '0';
            score += roll;
            currentRolls++;
            if (currentRolls == 2) {
                currentFrame++;
            }
        }

        if (currentFrame > 9) {
            break;
        }
    }

    return score;
}