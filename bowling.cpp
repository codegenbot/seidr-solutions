#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 2 ? 10 : s[i - 1] == 'X' ? 20 : s[i - 1] == '/' ? 15 : s[i - 1] - 1);
        } else if (s[i] == '/') {
            int currentRoll = 10 - (s[i + 1] == 'X' ? 10 : s[i + 1] - 1);
            score += currentRoll;
            i++;
        } else {
            int currentRoll = s[i] - '0';
            if (i < 8 && s[i + 1] != '/' && s[i + 1] == 'X') {
                currentRoll *= 2;
            } else if (i < 8 && s[i + 1] != '/' && s[i + 1] - '0' > currentRoll) {
                currentRoll += s[i + 1] - '0';
                i++;
            }
            score += currentRoll;
        }
    }
    return score;
}