#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            for (int j = i; j < i + 2 && j < bowls.length(); j++) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                } else {
                    break;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;