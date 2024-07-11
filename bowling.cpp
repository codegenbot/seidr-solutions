#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i + 2 < s.size() && (s[i+1] - '0') > 1 || s[i+1] == 'X') {
                score += 10;
            } else {
                score += 10 + (s[i-1] - '0');
            }
        } else if('0' <= s[i] && s[i] <= '9') {
            score += s[i] - '0';
        } else if(s[i] == 'X') {
            score += 10;
        }
    }
    return score;
}