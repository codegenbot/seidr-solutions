#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 - (26 - ((i / 2) * 2));
        } else {
            int pins = s[i] - '0';
            score += pins;
            if (pins < 10) {
                if (s[i+1] == '/') {
                    score += 10 - (26 - ((i/2)*2));
                } else {
                    for (int j = i+1; j < i+4 && s[j]!='/' && s[j] != 'X'; j++) {
                        pins++;
                        if(s[j] - '0' > pins) {
                            score += 10;
                            break;
                        }
                    }
                }
            }
        }
    }
    return score;
}