#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (i < s.length() - 1 && s[i] == '/') {
            string rolls = s.substr(0, i);
            int firstRoll = stoi(rolls);
            int secondRoll = stoi(s.substr(i + 1));
            if (firstRoll + secondRoll >= 10) {
                score += 10;
            } else {
                score += firstRoll + secondRoll;
            }
        } else {
            int roll = s[i] - '0';
            if (roll == 10) {
                score += 10;
            } else {
                score += roll;
            }
        }
    }
    return score;
}