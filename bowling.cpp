#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/') {
            if (i + 2 <= str.length()) {
                if (str[i+1] != '/' && str[i+2] != '/') {
                    score += 10 - ((str[i-1] - '0') + (str[i] - '0'));
                } else {
                    score += 10;
                }
            }
        } else if (isdigit(str[i])) {
            score += str[i] - '0';
        }
    }
    return score;
}