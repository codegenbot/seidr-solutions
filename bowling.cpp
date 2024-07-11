#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastFrameStrike = false;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { 
            score += 10 + (i < 9 ? bowlingScore(s.substr(i+1)) : 0);
        } else if (s[i] == '/') { 
            int j = i + 2;
            while (j < s.size() && s[j] != 'X' && s[j] != '/') {
                ++j;
            }
            score += 10 - s[i-1] - s[i];
        } else { 
            int a = s[i] - '0';
            int b = s[i+1] - '0';
            score += a + b;
        }
    }
    return score;
}