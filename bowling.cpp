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
            string right = s.substr(s.find('/'), 2);
            int totalPins = stoi(left) + stoi(right);
            score += 10 - totalPins;
            s.erase(0, s.find('/') + 1);
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                string rest = s.substr(1);
                if (!rest.empty() && rest[0] == '/') {
                    string left2 = rest.substr(0, rest.find('/'));
                    string right2 = rest.substr(rest.find('/'), 2);
                    int totalPins2 = stoi(left2) + stoi(right2);
                    score += 10 - totalPins2;
                    s.erase(0, rest.find('/') + 1);
                } else {
                    s.erase(0, 1);
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}