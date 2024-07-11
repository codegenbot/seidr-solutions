#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i > 0 && s[i - 1] == 'X') {
                score += 30;
            } else if(i > 0 && s[i - 1] == 'X' || s[i - 1] == '/') {
                score += 10;
            }
            i++;
        } else if(s[i] == 'X') {
            score += 10;
            continue;
        } else if('0' <= s[i] && s[i] <= '9') {
            int roll = (s[i] - '0');
            if(i < s.size() - 1) {
                i++;
                if(s[i] == '/') {
                    score += (roll * 10);
                } else if(s[i] == 'X') {
                    score += (roll * 10) + 10;
                } else {
                    roll = roll * 10 + (s[i] - '0');
                }
            } else {
                score += roll * 10;
            }
        }
    }
    return score;