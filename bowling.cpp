#include <cstring>
int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;
    for (int i = 0; i < strlen(s); i++) { 
        char c = s[i];
        if (c == 'X') {
            score += 30;
            currentRoll++;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                score += roll * 2;
                currentRoll = 0;
            }
        }
    }
    return score;
}