#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] == 'X')) {
                i++;
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            i += 2;
        } else {
            int roll = s[i] - '0';
            if (i + 1 < s.length() && s[i+1] >= '0' && s[i+1] <= '9') {
                roll += s[i+1] - '0';
                i++;
            }
            score += roll;
        }
    }
    return score;