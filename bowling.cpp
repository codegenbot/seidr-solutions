#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int firstPin = stoi(s.substr(0, i));
            int secondPin = stoi(s.substr(i + 1));
            score += firstPin + secondPin;
            currentFrame++;
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else if (s[i] == ' ') {
            i++; // skip the space
        } else {
            int pins = stoi(s.substr(i));
            if (pins < 10) {
                score += pins;
                currentFrame++;
            } else {
                score += 10 + stoi(s.substr(i + 1, 1));
                currentFrame++;
            }
        }
    }
    return score;