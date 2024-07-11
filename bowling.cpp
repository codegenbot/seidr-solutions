```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool bonus = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += (10 - '0') * 10 + (10 - 'X');
            } else {
                score += (10 - 'X') * 10;
            }
            roll = 0;
            bonus = false;
        } else if('0' <= s[i] && s[i] <= '9') {
            roll = roll * 10 + (s[i] - '0');
        } else if(s[i] == 'X') {
            score += 10;
            roll = 0;
            bonus = true;
        }
    }
    if(roll > 0 || bonus) {
        if(roll == 10) score += 10;
        else score += (10 - '0') * 10 + (10 - 'X');
    }
    return score;
}