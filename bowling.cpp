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
            string rest = s.substr(s.find('/'));
            int spare = 10 - stoi(rest.substr(0, 1));
            score += spare;
            s.erase(0, s.find('/') + 1);
            while (!s.empty() && s[0] != 'X') {
                if (s[0] == '/') {
                    s.erase(0, 1);
                } else {
                    int pins = s[0] - '0';
                    score += pins;
                    s.erase(0, 1);
                }
            }
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                while (!s.empty() && s[0] != '/' && s[0] != 'X') {
                    int extraPins = s[0] - '0';
                    score += extraPins;
                    s.erase(0, 1);
                }
                if (!s.empty() && s[0] == '/') {
                    string rest = s.substr(1);
                    int spare = 10 - stoi(rest.substr(0, 1));
                    score += spare;
                    s.erase(0, s.find('/') + 1);
                } else {
                    frame++;
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}