#include <string>
int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    bool spare = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 8 ? bowlingScore(s.substr(i+1)) : 0);
            continue;
        }
        roll1 = s[i] - '0';
        if (i < 8) {
            if (s[i+1] == '/') {
                spare = true;
                i++;
                continue;
            }
            roll2 = s[i+1] - '0';
            score += roll1 + roll2;
            if (roll1 + roll2 == 10) {
                score += bowlingScore(s.substr(i+2));
            }
        } else {
            score += roll1;
        }
    }

    return score;
}