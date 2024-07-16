#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2 = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            roll1 = s[i-1] - '0';
            roll2 = s[i+1] - '0';
            score += max(roll1, roll2);
        } else if (s[i] >= 'X') {
            score += 10;
            if(i < 8 && s[i+1] != 'X' && s[i+1] != '/') {
                score += s[i+1] - '0';
            }
        } else {
            roll2 = s[i] - '0';
            score += roll2;
        }
    }
    return score;