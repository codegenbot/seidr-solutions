#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int frame = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
        } else if (inFrame) {
            if (c != 'X') {
                score += (10 - (c - '0'));
            }
            inFrame = false;
        } else {
            if (c == 'X') {
                score += 10;
            } else {
                score += c - '0';
            }
        }

        frame++;
        if (frame >= 10) break;
    }

    return score;