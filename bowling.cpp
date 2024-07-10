#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 1 ? 10 : 0);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else if (isdigit(c)) {
            int points = c - '0';
            roll++;
            if (roll == 2) {
                score += points * 2;
                roll = 0;
            }
        }
    }
    return score;