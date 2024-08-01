#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int frame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 - currentRolls);
            }
            currentRolls = 0;
            frame++;
        } else if (isdigit(c)) {
            currentRolls *= 10;
            currentRolls += c - '0';
        }
    }

    // last two rolls
    if (currentRolls == 10) {
        score += 10;
    } else if (frame < 10) {
        score += currentRolls;
    } else {
        for (int i = 0; i < frame - 1; i++) {
            if (s[i] == '/') {
                score += 10;
            }
        }
        score += currentRolls;
    }

    return score;
}