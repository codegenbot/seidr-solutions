#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            score += 10;
            roll = 0;
        } else if(s[i] == '/') {
            if(roll == 1) {
                score += (10 - '0');
            } else {
                score += 10;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int currentRoll = (s[i] - '0');
            roll++;
            if(roll == 1) {
                score += currentRoll;
            } else if(roll == 2) {
                score += currentRoll + (10 - '0');
                if(currentRoll < 10) {
                    score += (10 - '0') * 10;
                }
            }
        }
    }
    return score;
}