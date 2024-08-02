#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 0) {
                if (currentRoll == 10) {
                    score += 10 + bowlingScore(s.substr(2)) - '0' - '0';
                } else {
                    score += currentRoll;
                    for (int i = 0; i < 2; ++i) {
                        currentRoll = s[s.find('/') + 1] - '0';
                        s.erase(s.find('/') + 1);
                        if (!s.empty()) s.erase(0, 1);
                        score += currentRoll;
                    }
                }
                currentRoll = 0;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    if (currentRoll > 0) score += currentRoll;
    return score;