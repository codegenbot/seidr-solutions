#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += 10;
            } else {
                score += 10;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int temp = roll;
            roll = roll * 10 + (s[i] - '0');
            if(temp == 0) score += roll;
            else score += (temp < 2 ? 10 : temp) + roll;
        } else if(s[i] == 'X') {
            score += 10;
            roll = 0;
        }
    }
    return score;