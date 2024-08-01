#include <string>

int bowlingScore(string s) {
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

    if (currentRolls == 10) {
        score += 10;
    } else if (frame < 10) {
        score += currentRolls;
    } else {
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '/') {
                frame--;
            }
            if (frame > 1 && s[i] != '/') {
                score += '0' + s[i];
            }
            if (frame == 1) {
                score += '0' + s[i];
                break;
            }
        }
    }

    return score;
}