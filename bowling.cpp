#include <vector>
#include <iostream>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool isPreviousFrameStrike = false;
    int previousFrameScore = 0;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10 + previousFrameScore;
            previousFrameScore = 0;
            isPreviousFrameStrike = true;
        } else if (isdigit(s[i])) {
            int currentRoll = (s[i] - '0');
            if (!isPreviousFrameStrike) {
                previousFrameScore += currentRoll;
            }
            if (i < s.size() - 1 && s[i + 1] == '/') {
                score += currentRoll;
                isPreviousFrameStrike = false;
            } else if (i < s.size() - 2 && s[i + 1] == 'X' && s[i + 2] == 'X') {
                score += 10 + previousFrameScore;
                previousFrameScore = 0;
                isPreviousFrameStrike = true;
            }
        }
    }
    
    return score;
}