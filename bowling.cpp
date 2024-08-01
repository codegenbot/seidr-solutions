#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 - (26 - (i / 2) * 2);
        } else {
            int pins = s[i] - '0';
            score += pins;
            if (pins < 10) {
                for (int j = i + 1; j <= i + 3 && j < s.length(); j++) {
                    if (s[j] == '/') {
                        score += 10 - (26 - (i / 2) * 2);
                        break;
                    } else {
                        pins++;
                    }
                }
            }
        }
    }
    return score;