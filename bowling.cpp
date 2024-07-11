#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += 10 + (10 - '0') * 10 + (10 - 'X');
            } else {
                score += (10 - 'X') * 10;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            roll = roll * 10 + (s[i] - '0');
        } else if(s[i] == 'X') {
            score += 10;
            roll = 0;
        }
    }
    return score;