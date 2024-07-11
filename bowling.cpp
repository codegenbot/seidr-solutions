#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll > 0) {
                score += roll;
            } else {
                score += 10;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int temp = (s[i] - '0');
            roll = roll * 10 + temp;
        } else if(s[i] == 'X') {
            score += 10;
            roll = 0;
        }
    }
    while(roll > 1) {
        score += 10;
        roll -= 2;
    }
    if(roll == 1) {
        score += roll;
    }
    return score;