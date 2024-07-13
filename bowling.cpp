#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            score += 10;
            continue;
        }

        if (s[5*frame] == 'X') {
            score += 10;
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