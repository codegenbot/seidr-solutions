#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            // Spare
            score += 10;
            continue;
        }

        if (s[5*frame] == 'X') {
            // Strike
            score += 10;
        } else {
            roll1 = s[5*frame] - '0';
            roll2 = s[5*frame + 1] - '0';

            if (roll1 + roll2 > 10) {
                // Next roll is part of the current frame
                score += 20 - (s[5*frame + 1] == '/' ? 1 : roll2);
            } else {
                // Next roll is a new frame
                score += roll1 + roll2;
            }
        }
    }

    return score;
}