#include <vector>
#include <string>

int bowlingScore(const std::string& rolls) {
    int score = 0;
    int roll = 0;
    bool lastFrame = false;

    for (char c : rolls) {
        if (c == 'X') {
            score += 30;
            roll = 2;
            lastFrame = true;
        } else if (c == '/') {
            score += 10 + (roll - 1);
            roll = 0;
            lastFrame = false;
        } else {
            int frameScore = c - '0';
            score += frameScore;
            roll++;
        }
    }

    if (!lastFrame) {
        for (int i = 0; i < roll; ++i) {
            score += 10;
        }
    }

    return score;
}