#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            i++; // skip '/'
            for (int j = 0; ; j++) {
                if (i + j >= s.length() || !isdigit(s[i + j])) break;
            }
            int pins = 10 - (s[i + j - 1] - '0');
            score += pins;
        } else if (isdigit(s[i])) {
            int pins = 0;
            while (i < s.length() && isdigit(s[i])) {
                pins = pins * 10 + (s[i] - '0');
                i++;
            }
            if (i < s.length() && s[i] == '/') {
                score += pins;
                i++; // skip '/'
            } else {
                score += pins;
            }
        }
    }
    return score;