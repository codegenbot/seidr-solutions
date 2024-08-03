#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int left = s[i-1] - '0';
            int right = s[i+1] - '0' - '0';
            score += left + right;
        } else {
            int count = s[i] - '0';
            for (int j = 0; j < count; j++) {
                if (i == 9) {
                    score += 10;
                } else if (s[i+1] == 'X') {
                    score += 10 + 10;
                    break;
                } else if (s[i+1] == '/') {
                    int left = s[i+2] - '0';
                    int right = s[i+3] - '0' - '0';
                    score += 10 + left + right;
                    break;
                }
            }
        }
    }
    return score;
}