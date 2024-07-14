#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (c == '/') {
            score += 10 - (strike ? 2 : 1);
            strike = false;
        } else {
            int num = c - '0';
            score += num;
        }
    }
    return score;