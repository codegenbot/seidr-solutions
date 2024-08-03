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
            string firstPart = s.substr(0, s.find('/'));
            string secondPart = s.substr(s.find('/') + 1);
            int leftPins = 10 - stoi(firstPart) - stoi(secondPart);
            score += 10 + stoi(firstPart);
            frame++;
            s.erase(0, s.find('/') + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                if (!s.empty() && s[0] == '/') {
                    string firstPart = s.substr(0, s.find('/'));
                    string secondPart = s.substr(s.find('/') + 1);
                    int leftPins = 10 - stoi(firstPart) - stoi(secondPart);
                    score += 10 + stoi(leftPins);
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