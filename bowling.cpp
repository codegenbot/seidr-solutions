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
            string left, right;
            size_t pos = s.find('/');
            left = s.substr(0, pos);
            right = s.substr(pos + 1);
            int pins = 10 - stoi(left) - stoi(right);
            score += 10 + pins;
            s.erase(0, pos + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                if (!s.empty() && s[0] == '/') {
                    string left, right;
                    size_t pos = s.find('/');
                    left = s.substr(0, pos);
                    right = s.substr(pos + 1);
                    int pins = 10 - stoi(left) - stoi(right);
                    score += 10 + pins;
                    frame++;
                    s.erase(0, pos + 1);
                } else if (!s.empty() && s[0] == 'X') {
                    score += 30;
                    frame++;
                    s.erase(0, 1);
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}