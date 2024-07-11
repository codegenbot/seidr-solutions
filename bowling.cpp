#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll > 1) {
                score += 10;
            } else {
                score += (10 - '0');
            }
            roll = 0;
            spare = false;
        } else if('0' <= s[i] && s[i] <= '9') {
            int x = s[i] - '0';
            if(roll == 1) {
                if(x + roll > 10) {
                    score += (10 - '0');
                } else {
                    score += x + roll;
                }
                spare = false;
                roll = 0;
            } else {
                roll = roll * 10 + x;
            }
        } else if(s[i] == 'X') {
            score += 10;
            roll = 1;
            spare = true;
        }
    }

    if(roll > 0) {
        if(roll == 2 && !spare) {
            score += 10;
        } else if(roll + (s.size() - s.find('X')) <= 10) {
            score += roll;
        } else {
            score += (10 - '0');
        }
    }

    return score;
}