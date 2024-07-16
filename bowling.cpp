#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] >= '1' && s[i] <= '9')) {
                i++;
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            score += firstRoll;
            i++;
            if (i < s.length() && (s[i] >= '1' && s[i] <= '9')) {
                score += s[i] - '0';
                i++;
            }
        } else {
            int roll = s[i] - '0';
            score += roll;
            i++;
            if (i < s.length() && s[i] == '/') {
                i++;
            }
        }
    }
    return score;
}