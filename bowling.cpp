#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while (j < i + 2 && j < bowls.length()) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                    j++;
                } else if (bowls[j] == '/') {
                    int nextRoll = 10 - (currentFrameScore % 10);
                    score += currentFrameScore;
                    if (nextRoll > 0) {
                        while (j < bowls.length() && !isdigit(bowls[j])) {
                            j++;
                        }
                        currentFrameScore += nextRoll * 10;
                    }
                    break;
                } else {
                    currentFrameScore += (bowls[j] - '0');
                    j++;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;