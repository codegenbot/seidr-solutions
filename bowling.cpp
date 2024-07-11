#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastFrameStrike = false;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? bowlingScore(s.substr(i+1)) : 0);
        } else if (s[i] == '/') { // spare
            int j = i + 2;
            while (j < s.size() && s[j] != 'X' && s[j] != '/') {
                ++j;
            }
            score += 10 - s[i-1] - s[i];
        } else { // regular roll
            int a = s[i] - '0';
            int b = (i < 9 ? s[i+1] - '0' : 0);
            score += a + b;
        }
    }
    return score;
}