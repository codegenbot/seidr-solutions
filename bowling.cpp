#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while (j < bowls.length() && (isdigit(bowls[j]) || (i < 9 && j == i + 1 && bowls[j] == '/'))) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                } else if (j == i + 1 && bowls[j] == '/') {
                    currentFrameScore += 10 - (currentFrameScore / 10);
                }
                j++;
            }
            score += currentFrameScore;
        }
    }
    return score;