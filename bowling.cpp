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
            string left = s.substr(0, s.find('/'));
            string right = s.substr(s.find('/') + 1);
            int leftPins = stoi(left) - 10;
            score += 10 + leftPins + stoi(right);
            s.erase(0, s.find('/') + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                string newS = s;
                size_t pos = 0;
                while ((pos = newS.find('/')) != string::npos) {
                    int leftPins = stoi(newS.substr(0, pos)) - 10;
                    score += 10 + leftPins + stoi(newS.substr(pos + 1, 1));
                    newS.erase(0, pos + 2);
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}