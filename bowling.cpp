#include <string>
int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 10;
            if (i < 9) {
                score += bowlingScore(s.substr(i+1));
            }
        } else if (s[i] == '/') {
            spare = true;
            i++;
        } else {
            roll1 = s[i] - '0';
            if (i < 8) {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
                if (roll1 + roll2 == 10) {
                    spare = true;
                }
            } else {
                score += roll1;
            }
        }
    }

    return score;
}