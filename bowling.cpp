#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int frame = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (roll > 9)
                score += 10;
            else
                score += roll;
            roll = 0;
            frame++;
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        }
    }

    // Last two rolls
    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score;