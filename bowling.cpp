```
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int frame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (frame < 10 && (roll == 10 || ((roll + (s[i+1] - '0')) <= 10))) {
                score += roll + s[i+1] - '0';
                i++;
            } else {
                score += roll;
            }
            roll = 0;
            frame++;
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        }
    }

    return score;
}