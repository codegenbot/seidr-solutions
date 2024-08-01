#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == 'X') {
            score += 10 + (roll > 0 ? max(1, 10 - roll) : 10);
            roll = 0;
        } else if (s[i] == '/') {
            score += 10;
            roll = 2;
        } else {
            roll++;
            if(roll >= 2) break;
        }
    }
    return score;
}