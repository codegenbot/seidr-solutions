#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            score += 10;
            roll1 = 10 - (s[5*frame + 1] - '0');
            if (s[10*frame+1] == 'X' || s[10*frame+2] == '/') {
                score += roll1 * 2;
            } else {
                score += roll1 + (s[5*frame + 1] - '0');
            }
        } 
        else if (s[5*frame] == 'X') {
            score += 10;
            if (frame < 8) {
                if (s[10*frame+1] == 'X') {
                    score += 10;
                } 
                else if (s[10*frame+1] == '/') {
                    score += 10 + (s[10*frame+1] - '0');
                }
                else {
                    roll2 = s[10*frame+1] - '0';
                    score += 10 + roll2;
                }
            }
        } 
        else {
            roll1 = s[5*frame] - '0';
            if (roll1 + (s[5*frame + 1] - '0') > 10) {
                score += 10;
            } else {
                score += roll1 + (s[5*frame + 1] - '0');
            }
        }
    }

    return score;
}