#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (isdigit(bowls[i])) {
            int currentFrameScore = 0;
            int j = i;
            while(j < bowls.length() && (j + 1 < bowls.length() ? isdigit(bowls[j+1]) : true)) {
                if (isdigit(bowls[j])) {
                    currentFrameScore = currentFrameScore * 10 + (bowls[j] - '0');
                    j++;
                    if (j < bowls.length()) {
                        if (bowls[j] == '/') {
                            break;
                        }
                        j++;
                    }
                } else {
                    break;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;