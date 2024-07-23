#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            i++;
            int j = i + 1;
            while (j < s.size() && !isdigit(s[j])) {
                j++;
            }
            int pins = s[j] - '0';
            score += 10 - pins;
            i = j;
        } else if (isdigit(s[i])) {
            int j = i;
            while (j < s.size() && isdigit(s[j])) {
                j++;
            }
            int pins = 0;
            for (; i < j; i++) {
                pins = pins * 10 + (s[i] - '0');
            }
            if (i == j) {
                score += pins;
            } else if (j - i > 1) {
                score += max(pins, 10);
                if (pins < 10) {
                    score += pins;
                }
            } else {
                score += pins;
            }
        }
    }
    return score;