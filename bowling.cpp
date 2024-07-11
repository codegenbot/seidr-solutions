#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += 10;
            } else {
                int bonus = (i+1 >= s.size() || s[i+1] != '/' ? 0 : 10);
                score += 10 + bonus;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            roll = roll * 10 + (s[i] - '0');
        } else if(s[i] == 'X') {
            score += 10 + (i < s.size() ? (s[i+1] == '/' ? 2 : (s[i+1] == 'X' ? 10 : (s[i+1] - '0'))) : 0);
            roll = 0;
        }
    }
    return score;
}