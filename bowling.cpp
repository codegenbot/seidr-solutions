```cpp
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
            int leftPins = stoi(left) - 1;
            int rightPins = stoi(right);
            score += 10 - leftPins;
            frame++;
            s.erase(0, s.find('/') + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                if (!s.empty() && s[0] == '/') {
                    string left = s.substr(0, s.find('/'));
                    string right = s.substr(s.find('/') + 1);
                    int leftPins = stoi(left) - 1;
                    int rightPins = stoi(right);
                    score += 10 - leftPins;
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