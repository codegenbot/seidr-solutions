```
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += roll1 + roll2;
            } else if (i < 9) {
                if (i >= s.length() - 2) break;
                int roll2 = s[++i] - '0';
                score += roll1 * 2 + roll2;
            } else {
                score += roll1 * 2;
            }
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            if (i >= s.length() - 1) break;
            score += roll1 + roll2;
        }
    }
    return score;
}

int main() {
    return bowlingScore("X|9-/8-7-X|-3|5/X|-10|-8-4-6|5/5|-1-3-7-X");
}