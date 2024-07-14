#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while (j < bowls.length() && j - i <= 1) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                    j++;
                } else {
                    break;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;