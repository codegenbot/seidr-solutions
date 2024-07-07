#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - stoi(s.substr(0, s.find('/'))));
            }
            roll = 0;
        } else if (isdigit(c)) {
            int pins = stoi(string(1, c));
            if (roll > 0) {
                pins += stoi(string(1, c));
            }
            score += pins;
            roll++;
            if (roll == 2) {
                roll = 0;
            }
        } else { // X
            score += 10;
            roll = 0;
        }
    }
    return score;