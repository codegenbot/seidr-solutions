#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i + 1 >= s.size() || s[i+1] != '/') {
                score += (s[i-1] - '0') * 10;
            } else {
                int rolls = 2;
                while(rolls--) {
                    score += (s[i-1] - '0') * 10 + (s[i] - '0');
                    i++;
                }
            }
        } else if('0' <= s[i] && s[i] <= '9') {
            int rolls = 1;
            while(rolls--) {
                score += (s[i] - '0');
                i++;
                if(i < s.size() && s[i] == '/') break;
            }
        } else if(s[i] == 'X') {
            score += 10;
            if(i + 1 < s.size() && s[i+1] != '/') {
                int rolls = 2;
                while(rolls--) {
                    score += (s[i+1] - '0');
                    i++;
                }
            } else {
                i++;
            }
        }
    }
    return score;