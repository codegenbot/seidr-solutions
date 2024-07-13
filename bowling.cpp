#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;

    istringstream ss(s);
    char c;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
            lastRollWasStrike = true; 
        } else if (c == '/') {
            if (!lastRollWasStrike) {
                score += 10 + (score / 10);
            }
            lastRollWasStrike = false;
        } else {
            int temp = c - '0';
            if (lastRollWasStrike) {
                score += temp * 2; 
                lastRollWasStrike = false;
            } else {
                score += temp;
            }
        }
    }

    return score;
}