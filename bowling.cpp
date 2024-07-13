#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (roll1 + roll2 >= 10) {
                score += 10;
            } else {
                score += roll1 + roll2;
            }
            roll1 = 0;
            roll2 = 0;
        } else if (isdigit(s[i])) {
            int x = s[i] - '0';
            if (roll1 == 0) {
                roll1 = x;
            } else {
                roll2 = x;
            }
        }
    }

    if (roll1 + roll2 > 0) {
        if (roll1 + roll2 >= 10) {
            score += 10;
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}