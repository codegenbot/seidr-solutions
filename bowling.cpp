#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] >= '0' && s[i] <= '9')) {
                if (roll > 0) {
                    score += roll;
                }
                roll = 0;
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i - 1] - '0';
            int secondRoll = s[i + 1] - '0';
            score += max(firstRoll, secondRoll);
            i++;
            while (i < s.length() && (s[i] >= '0' && s[i] <= '9')) {
                roll = roll * 10 + s[i] - '0';
                i++;
            }
        } else {
            roll = roll * 10 + s[i] - '0';
            i++;
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;
}