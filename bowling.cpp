#include <string>

int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i+1 >= s.size() || s[i+1] == 'X' || (s[i+1] >= '1' && s[i+1] <= '9')) 
                score += 10;
            else
                score += 10 - (s[i-1] - '0');
        } else if('0' <= s[i] && s[i] <= '9') {
            int roll = s[i] - '0';
            if(i < s.size() - 1 && s[i+1] == 'X')
                score += 10 + roll * 10;
            else
                score += roll;
        } else if(s[i] == 'X') {
            score += 10;
            if(i < s.size() - 1 && s[i+1] == 'X' || s[i+1] >= '0' && s[i+1] <= '9')
                score += 10 * 2;
        }
    }
    return score;