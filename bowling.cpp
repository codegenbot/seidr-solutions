#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; ++frame) {
        if (s[5*frame] == '/') {
            score += 10;
            if (frame != 9) {
                if (s[5*(frame+1)] == 'X' || s[5*(frame+1)] - '0' + s[5*(frame+1)+1] - '0' <= 10)
                    score += s[5*(frame+1)] - '0';
            }
        }

        if (s[5*frame] == 'X') {
            score += 10;
            roll1 = 10;
            if (frame != 9) {
                if (s[5*(frame+1)] == '/') || s[5*(frame+1)] - '0' + s[5*(frame+1)+1] - '0' <= 10)
                    score += s[5*(frame+1)] - '0';
                else
                    roll2 = s[5*(frame+1)] - '0' + s[5*(frame+1)+1] - '0';
            }
        }

        if (s[5*frame] >= '1' && s[5*frame] <= '9') {
            roll1 = s[5*frame] - '0';
            if (s[5*frame + 1] == '/') || s[5*frame + 1] - '0' + s[5*frame + 2] - '0' > 10)
                score += roll1 + 10;
            else
                score += roll1 + s[5*frame+1] - '0';
        }
    }

    return score;
}