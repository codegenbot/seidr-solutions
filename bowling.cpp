#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsInFrame = 0;
    
    for (char c : s) {
        if (c == 'X') { // Strike
            score += 10 + getBonusForNextTwoRolls(s, currentFrame);
            currentFrame++;
            rollsInFrame = 2;
        } else if (c == '/') { // Spare
            score += 5 + getBonusForNextRoll(s, currentFrame);
            currentFrame++;
            rollsInFrame = 1;
        } else { // Normal roll
            int rollValue = c - '0';
            score += rollValue;
            rollsInFrame++;

            if (rollsInFrame == 2) {
                currentFrame++;
            }
        }
    }

    return score;
}

int getBonusForNextTwoRolls(string s, int frameNumber) {
    for (int i = 0; i < 2; i++) {
        char c = s[frameNumber * 2 + i];
        if (c == 'X') return 10;
        else if (c == '/') return 5;
        else return c - '0';
    }
}

int getBonusForNextRoll(string s, int frameNumber) {
    for (int i = 0; i < 1; i++) {
        char c = s[frameNumber * 2 + i];
        if (c == 'X') return 10;
        else if (c == '/') return 5;
        else return c - '0';
    }
}