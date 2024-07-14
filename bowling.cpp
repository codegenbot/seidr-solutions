#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while (j < bowls.length() && (isdigit(bowls[j]) || bowls[j] == '/')) {
                if (isdigit(bowls[j])) {
                    currentFrameScore += (bowls[j] - '0');
                } else if (bowls[j] == '/') {
                    currentFrameScore += 10 - currentFrameScore;
                    break;
                }
                j++;
            }
            score += currentFrameScore;
        }
    }
    return score;