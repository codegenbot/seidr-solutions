#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (2 * (frame % 2));
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            frame++;
            if (frame < 9) {
                if (s[frame] == 'X' || s[frame] == '/') {
                    if (pins < 10) {
                        score += 10 - pins;
                    }
                } else {
                    int nextPins = s[frame + 1] - '0';
                    if (pins + nextPins >= 10) {
                        score += 10;
                    } else {
                        score += pins + nextPins;
                    }
                }
            }
        }
    }
    return score;