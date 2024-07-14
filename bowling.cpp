#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (str[i] == '/') {
            string first = str.substr(0, i);
            string second = str.substr(i + 1);
            int strike = 0;
            int spare = 0;
            for (char c : first) {
                if (c == 'X') {
                    score += 10;
                    strike++;
                } else {
                    score += c - '0';
                }
            }
            for (char c : second) {
                if (c == '/') {
                    spare = 1;
                    break;
                } else if (c == 'X') {
                    score += 10;
                    strike++;
                } else {
                    score += c - '0';
                }
            }
            if (!spare && !strike) {
                score += first.size() + second.size();
            }
        } else {
            score += str[i] - '0';
        }
    }
    return score;