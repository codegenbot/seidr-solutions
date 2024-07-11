#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i+2<s.size() && (s[i+1]-'0'>=1 || s[i+1]=='X')) {
                score += roll + (10 - roll);
            } else {
                score += roll;
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
    return score;