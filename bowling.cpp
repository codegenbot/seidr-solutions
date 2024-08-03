#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRoll > 0 ? currentRoll : 10);
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            while (c != ' ' && c != '/' && c != '\0') {
                c = getchar();
                if (c >= '0' && c <= '9') {
                    roll = roll * 10 + c - '0';
                } else break;
            }
            score += roll;
        }
    }
    return score;