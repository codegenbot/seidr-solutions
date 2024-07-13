#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            score += 10;
            int nextRoll = s[5*frame + 1] - '0';
            score += nextRoll;
        }

        else if (s[5*frame] == 'X') {
            score += 10;
            if (frame < 8) {
                char nextChar = s[5*frame + 1];
                if (nextChar == 'X')
                    score += 10;
                else
                    score += nextChar - '0';
            }
        }

        else {
            roll1 = s[5*frame] - '0';
            roll2 = s[5*frame + 1] - '0';

            if (roll1 + roll2 > 10) {
                score += 10;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}