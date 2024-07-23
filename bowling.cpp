```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10;
            if (i + 1 < s.length()) {
                int val = s[i + 1] - '0';
                if (val >= 7) {
                    score += val * 2;
                    i++; // Skip the second roll
                } else {
                    score += val * 2;
                }
            }
        } else {
            int val = c - '0';
            if (i + 1 < s.length()) {
                char nextC = s[i + 1];
                if (nextC == 'X') {
                    score += 10 + val * 2;
                    i++; // Skip the second roll
                } else if (nextC == '/') {
                    int nextVal = nextC - '0';
                    if (val + nextVal >= 10) {
                        score += 10;
                        i++; // Skip the second roll
                    } else {
                        score += val + nextVal;
                    }
                } else {
                    score += val;
                }
            } else {
                score += val;
            }
        }
    }
    return score;
}