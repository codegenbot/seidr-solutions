#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (char c : str) {
        if (c == '/') {
            if (str[str.find(c) - 1] != 'x') {
                score += 10 - (str.find(c) - 1);
            }
        } else if (isdigit(c)) {
            int currentRoll = (c - '0');
            for (char d : str.substr(str.find(c) + 1)) {
                if (d == '/') {
                    score += currentRoll;
                    break;
                } else if (isdigit(d)) {
                    currentRoll *= 10 + (d - '0');
                } else {
                    currentRoll++;
                }
            }
        }
    }
    return score;
}