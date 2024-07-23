```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int pins = s[i] - '0';
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] == 'X')) {
                if (s[i] == '/') {
                    score += 10 - pins;
                    i++;
                } else {
                    score += 10 + pins;
                    i++;
                }
            } else {
                score += pins;
            }
        } else if (s[i] == '/') {
            int j = i + 1;
            while (j < s.length() && !isdigit(s[j])) {
                j++;
            }
            int pins = s[j] - '0';
            score += 10 - pins;
            j++;
        }
    }
    return score;
}