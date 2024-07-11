#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;

    for(int i = 0; i <= s.size(); i++) {
        if(i == s.size()) {
            break;
        }
        char c = s[i];

        if(c == '/') {
            if(roll < 2) {
                score += 10;
            } else {
                score += 20 - roll;
            }
            roll = 0;
        } else if('0' <= c && c <= '9') {
            int num = c - '0';
            roll = roll * 10 + num;

            if(i == s.size() - 1) {
                if(roll > 10) {
                    score += 10;
                } else {
                    score += roll;
                }
            }
        } else if(c == 'X') {
            score += 10;
            roll = 0;
        }
    }

    return score;
}