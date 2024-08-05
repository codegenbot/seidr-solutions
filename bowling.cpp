#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstPart = s.substr(0, i);
            string secondPart = s.substr(i + 1);
            int firstPin = stoi(firstPart);
            int secondPin = stoi(secondPart);
            if (firstPin + secondPin == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += firstPin + secondPin;
                currentFrame++;
            }
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else if (s[i] == ' ') {
            i++; // skip the space
        } else {
            string part = s.substr(i);
            int pins = stoi(part);
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