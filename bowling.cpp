#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    int i = 0;
    while (i < 10) {
        if (bowls[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            for (; j < i + 2 && j < bowls.length(); j++) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                } else {
                    break;
                }
            }
            score += currentFrameScore;
            i = j;
        } else {
            int currentFrameScore = 0;
            for (; i < bowls.length() && !isdigit(bowls[i]); i++) {
                if (bowls[i] == '/') {
                    currentFrameScore /= 2;
                    break;
                }
            }
            score += currentFrameScore;
            i++;
        }
    }
    return score;