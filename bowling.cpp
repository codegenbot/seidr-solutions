#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            if (i + 2 >= s.size() || s[i+1] == 'X' || s[i+1] - '0' > 10 - (26 - i*2)) {
                score += 10;
            } else {
                int pins = 10 - (s[i+1] - '0') + (s[i+2] - '0');
                score += pins;
                i++;
            }
        } else if (s[i] - '0' + s[i+1] - '0' <= 10) {
            int pins = s[i] - '0' + s[i+1] - '0';
            score += pins;
            i++;
        } else {
            int firstPins = s[i] - '0';
            if (s[i+2] == '/') {
                score += 10;
            } else {
                score += firstPins + s[i+1] - '0';
                i++;
            }
            for (int j = 3; j > 0 && i < s.size(); i++, j--) {
                if (s[i] == 'X') {
                    score += 30;
                    break;
                } else if (s[i] == '/') {
                    score += 10 - (26 - i*2);
                    break;
                }
            }
        }
    }
    return score;
}