#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strike = 1, spare = 0;
            for (int j = i; j < i + 2 && j < s.size(); ++j) {
                if (s[j] == '/') {
                    spare = 1;
                    break;
                }
                strike++;
            }
            if (strike > 1 || spare) {
                score += 10 - strike;
            } else {
                score += 10;
            }
        } else {
            int strike = 1, spare = 0;
            for (int j = i; j < s.size(); ++j) {
                if (s[j] == '/') {
                    spare = 1;
                    break;
                }
                strike++;
            }
            score += strike * 10;
        }
    }
    return score;
}