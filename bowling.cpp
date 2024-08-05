#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i <= s.length(); i++) {
        if (i < s.length() - 1 && s[i] == 'X') {
            score += 10;
            currentFrame++;
            if (currentFrame < 10) {
                if (s[i + 2] == '/' || s[i + 2] == 'X') {
                    i++; // skip the next pin
                    continue;
                }
            }
        } else if (i < s.length() - 1 && s.substr(i, 2) == "X/") {
            score += 10;
            currentFrame++;
            i++; // move on to the next frame
        } else if (s[i] == '/') {
            int firstPin =stoi(s.substr(0, i)) + stoi(s.substr(i + 1));
            score += firstPin;
            currentFrame++;
        } else if (s[i] != ' ') {
            int pins = stoi(s.substr(i));
            score += pins;
            currentFrame++;
        }
    }
    return score;