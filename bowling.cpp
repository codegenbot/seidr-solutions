#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while (j < bowls.length() && isdigit(bowls[j])) {
                currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                j++;
            }
            if (j < bowls.length() && bowls[j] == '/') {
                score += currentFrameScore;
                int nextRoll = 0;
                j++;
                while (j < bowls.length() && isdigit(bowls[j])) {
                    nextRoll = nextRoll * 10 + (bowls[j] - '0');
                    j++;
                }
                score += nextRoll;
            } else {
                score += currentFrameScore;
            }
        }
    }
    return score;
}