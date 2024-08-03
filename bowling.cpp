#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            int leftPins = 10 - (stoi(string(1, s[0]) + string(1, s[1])));
            score += leftPins;
            s.erase(0, 2);
            frame++;
        } else {
            int pins = c - '0';
            if (frame == 10) {
                score += pins;
            } else {
                score += pins;
                if (pins < 10) {
                    s.erase(0, 1);
                    if (!s.empty() && s[0] == '/') {
                        int leftPins = 10 - (stoi(string(1, s[0]) + string(1, s[1])));
                        score += leftPins;
                        s.erase(0, 2);
                        frame++;
                    }
                } else {
                    frame++;
                }
            }
        }
    }
    return score;
}