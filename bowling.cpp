#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] >= 'X')) {
                continue;
            }
            if (i < s.length()) {
                score += s[i] - '0' + s[i+1] - '0';
                i+=2;
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            i++;
        } else {
            int roll = s[i] - '0';
            score += roll;
            i++;
        }
    }
    return score;