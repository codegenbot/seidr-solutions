#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (i > 1 && s[i-2] == 'X') {
                score += 30;
            } else if (i > 0) {
                int prevRoll = stoi(s.substr(i - 1, 1));
                if (prevRoll < 10) {
                    score += 10 + prevRoll;
                } else {
                    score += 10;
                }
            }
            i++;
        } else if (isdigit(s[i])) {
            int roll = stoi(s.substr(i, 1));
            while (i < s.length() && isdigit(s[i])) {
                roll = roll * 10 + stoi(s.substr(i, 1)) - '0';
                i++;
            }
            score += roll;
        } else if (s[i] == 'X') {
            score += 10;
            if (i < s.length() - 1 && s[i+1] == '/') {
                score += 10;
            }
        }
    }
    return score;