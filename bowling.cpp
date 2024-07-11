#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool strike = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll > 0 ? roll : 0);
            strike = true;
        } else if(s[i] == '/') {
            if(strike) {
                score += 20 - (10 - '0');
            } else if(roll < 2) {
                score += 10 + (10 - '0');
            } else {
                score += roll * 2;
            }
            strike = false;
        } else if('0' <= s[i] && s[i] <= '9') {
            int num = s[i] - '0';
            if(roll == 1) {
                score += (strike ? 10 : 0) + num * 2;
            } else if(strike) {
                score += 10 + num;
            } else {
                roll = num;
            }
        }
    }
    return score;
}