#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    bool spare = false;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i > 0 && (s[i-1] >= '1' && s[i-1] <= '9')) {
                score += 10 - ('0' - s[i-1]);
            } else {
                score += 10;
            }
        } else if(s[i] == 'X') {
            score += 10;
        } else if(s[i] >= '1' && s[i] <= '9') {
            int num = s[i] - '0';
            if(i < s.size() - 1) {
                char c = s[i+1];
                if(c == '/') {
                    score += num + 10;
                } else if(c >= '1' && c <= '9') {
                    score += num + (c-'0');
                } else if(c == 'X') {
                    score += num + 10;
                }
            } else {
                score += num;
            }
        }
    }

    return score;
}