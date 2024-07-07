#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/') {
            if (i + 1 < str.length() && isdigit(str[i + 1])) {
                score += 10 - (str[i + 1] - '0');
            } else {
                score += 10;
            }
        } else if (isdigit(str[i])) {
            int currentRoll = str[i] - '0';
            if (i + 1 < str.length() && isdigit(str[i + 1])) {
                currentRoll *= 10 + (str[i + 1] - '0');
                i++;
            }
            score += currentRoll;
        } else {
            score += 1;
        }
    }
    return score;