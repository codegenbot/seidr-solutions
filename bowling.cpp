```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10;
            } else {
                score += 10 - currentRolls;
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            if (currentFrame < 10) {
                score += c - '0';
            } else {
                if (c >= '1' && c <= '6') {
                    score += c - '0' + 15;
                } else if (c == '7' || c == '8' || c == '9' || c == '/') {
                    int next = s.find('/');
                    if (next != std::string::npos) {
                        int bonus = (int)(s[next-1] - '0') + (int)(s[next+1] - '0');
                        score += c - '0' + 10 + bonus;
                    } else {
                        score += c - '0' + 10 + 10;
                    }
                }
            }
        }
    }

    return score;
}