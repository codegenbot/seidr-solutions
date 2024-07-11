#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i > 1 && s[i-2] != 'X') {
                score += (10 - (s[i-1] - '0'));
            }
            score += 10;
        } else if('0' <= s[i] && s[i] <= '9') {
            int val = s[i] - '0';
            if(i < s.size() - 1) {
                if(s[i+1] == '/') {
                    if(i > 1 && s[i-2] != 'X') {
                        score += (10 - (s[i-1] - '0'));
                    }
                    score += 10;
                    i++;
                    continue;
                } else if(s[i+1] == 'X') {
                    score += val + 10;
                    i++;
                    continue;
                }
            }
            score += val;
        } else if(s[i] == 'X') {
            score += 10;
            for(int j = i+1; j < s.size(); j++) {
                if(j < s.size() - 1 && s[j+1] == '/') {
                    continue;
                }
                score += (s[j] == 'X') ? 10 : s[j] - '0';
            }
        }
    }
    return score;
}