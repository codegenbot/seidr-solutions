```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i > 0 && s[i-1] != 'X') {
                score += (i < 9) ? 10 : 10 + 10 - (s[i-2] - '0');
            } else {
                score += 10;
            }
        } else if('0' <= s[i] && s[i] <= '9') {
            score += s[i] - '0';
        } else if(s[i] == 'X') {
            score += 10;
            if(i < 9) {
                if(s[i+1] != '/' && s[i+2] != 'X')
                    score += 10;
                else
                    score += 10 + 10 - (s[i+1] - '0');
            }
        }
    }
    return score;
}