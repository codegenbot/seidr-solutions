#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            score += 10;
            if (frame != 9) {
                int bonus = s[5*frame + 1] - '0';
                score += bonus;
            }
            continue;
        }

        if (s[5*frame] == 'X') {
            score += 10;
            if (frame < 8) {
                char next1 = s[5*frame + 1];
                char next2 = s[5*frame + 2];
                if (next1 == 'X' && next2 == 'X') {
                    score += 20;
                } else if ((next1 == '/') || (next1 - '0' + next2 - '0' >= 10)) {
                    score += 10;
                } else {
                    score += 10 + (next1 - '0' + next2 - '0');
                }
            }
            continue;
        }

        roll1 = s[5*frame] - '0';
        roll2 = s[5*frame + 1] - '0';

        if (roll1 + roll2 > 10) {
            score += 10;
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}