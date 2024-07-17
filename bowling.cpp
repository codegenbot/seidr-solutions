#include <string>
#include <cctype>

int bowlingScore(const std::string& frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 'X') {
            score += 30;
            i++;
        } else if (frames[i] == '/') {
            score += (10 - currentRolls);
            currentRolls = 0;
        } else if (std::isdigit(frames[i])) {
            int roll = frames[i] - '0';
            currentRolls++;
            if (currentRolls == 2) {
                if (frames[i+1] == '/' || i + 2 >= frames.size()) {
                    score += roll * 2;
                } else {
                    score += roll * 2 + frames[i+1] - '0';
                }
                currentRolls = 0;
            }
        }
    }
    return score;
}