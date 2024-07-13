#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < 10) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < 10 && s[i] == '/') {
                i++;
            }
        } else if (s[i] == '/') {
            int firstScore = (s[i - 1] - '0') * 2 + (s[i] - '0');
            score += firstScore;
            i++;
        } else {
            int framescore = (s[i] - '0') + (s[i + 1] - '0');
            if (framescore == 10) {
                score += framescore;
                i += 2;
            } else {
                score += framescore;
                i += 2;
            }
        }
    }
    return score;
}