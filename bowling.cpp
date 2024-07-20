#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool lastChance = true;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
            lastChance = false;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
            lastChance = true;
        } else {
            currentRoll = currentRoll * 10 + (c - '0') * 10;
            lastChance = false;
        }
        if (!lastChance && c != 'X') {
            if (currentRoll + (10 - (s[s.length() - 1] - '0')) >= 10) {
                score += currentRoll + 10;
            } else {
                score += currentRoll + s[s.length() - 1] - '0';
            }
        }
    }
    return score;
}