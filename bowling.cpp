#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 1;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                if (s[i+1] == '/') {
                    roll = 10 - frame;
                    score += roll;
                    i++;
                }
            }
            frame++;
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            frame++;
        } else {
            roll = s[i] - '0';
            score += roll;
            if (frame < 10) {
                if (s[i+1] >= 'X' || s[i+1] == '/') {
                    break;
                }
            }
            frame++;
        }
    }
    return score;
}