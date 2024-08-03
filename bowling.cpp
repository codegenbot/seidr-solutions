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
            int prevPins = stoi(s.substr(0, s.find('/')) - '0');
            score += 10 - prevPins;
            frame++;
            s.erase(0, s.find('/') + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                if (!s.empty() && s[0] == '/') {
                    int prevPins = stoi(s.substr(0, s.find('/')) - '0');
                    score += 10 - prevPins;
                    frame++;
                    s.erase(0, s.find('/') + 1);
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}