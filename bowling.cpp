```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += 10;
            } else {
                score += (10 - ('X' - '0'));
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int val = s[i] - '0';
            if(roll == 1) {
                if(val + roll > 10) {
                    score += (10 - (10 - val));
                } else {
                    score += val;
                }
                roll = 0;
            } else {
                roll = roll * 10 + val;
            }
        } else if(s[i] == 'X') {
            score += 10;
            roll = 0;
        }
    }
    return score;
}