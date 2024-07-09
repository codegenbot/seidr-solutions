```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            currentRoll += roll;
            if (s[1] == '/' || s[2] == 'X') {
                score += roll * 2;
            } else {
                score += roll;
            }
        }
    }
    return score;
}