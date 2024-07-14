#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            bool isStrike = false;
            for (int j = i; j < i + 3 && j < bowls.length(); j++) {
                if (isdigit(bowls[j])) {
                    if (!isStrike) {
                        currentFrameScore += (bowls[j] - '0');
                    } else {
                        currentFrameScore += (bowls[j] - '0') * 2;
                    }
                } else {
                    isStrike = true;
                    break;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;