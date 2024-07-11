#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == '/') {
            int firstRoll = stoi(s.substr(0, i));
            int secondRoll = stoi(s.substr(i + 1, s.length() - i - 1));
            if (firstRoll + secondRoll >= 10) {
                score += 10;
                i++;
            } else {
                score += firstRoll + secondRoll;
                i += 2;
            }
        } else {
            int roll = stoi(s.substr(i, 1));
            if (roll == 10) {
                score += 10;
                i++;
            } else {
                score += roll;
                i++;
            }
        }
    }
    return score;
}