#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            // Spare
            score += 10;
            if (frame != 9) {
                char nextRoll = s[5*frame + 1];
                if (nextRoll >= '2' && nextRoll <= '9') {
                    score += nextRoll - '0';
                }
            }
            continue;
        }

        if (s[5*frame] == 'X') {
            // Strike
            score += 10;
            for (int i = 1; i < 3; ++i) {
                if (5*frame + i >= s.length()) break;
                if (s[5*frame + i] == 'X') {
                    score += 10;
                } else {
                    score += s[5*frame + i] - '0' + (i == 1 ? 10 : 20);
                }
            }
            continue;
        }

        roll1 = s[5*frame] - '0';
        roll2 = s[5*frame + 1] - '0';

        if (roll1 + roll2 > 10) {
            // Next roll is part of the current frame
            score += 10;
        } else {
            // Next roll is a new frame
            score += roll1 + roll2;
        }
    }

    return score;
}