#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            score += (roll1 + roll2) * 10;
            roll1 = 0;
            roll2 = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int roll = (s[i] - '0');
            if(roll1 == 0) {
                roll1 = roll;
            } else {
                roll2 = roll;
                score += roll1 * 10 + (10 > roll2 ? roll2 : 10);
                roll1 = 0;
                roll2 = 0;
            }
        } else if(s[i] == 'X') {
            score += 10;
            if(roll1 != 0) {
                score += roll1 * 10 + (10 > roll2 ? roll2 : 10);
                roll1 = 0;
                roll2 = 0;
            }
        } else if(s[i] == 'S') {
            int roll = 5;
            if(roll1 != 0) {
                score += roll1 * 10 + (10 > roll2 ? roll2 : 10);
                roll1 = 0;
                roll2 = 0;
            }
            score += roll * 10;
        }
    }
    if(roll1 != 0 || roll2 != 0) {
        if(roll1 == 0) {
            score += roll2 * 10;
        } else if(roll2 == 0) {
            score += roll1 * 10 + (10 > roll2 ? roll2 : 10);
        } else {
            score += roll1 * 10 + roll2;
        }
    }
    return score;
}