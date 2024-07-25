#include <vector>
#include <string>

int bowlingScore(const std::string& rounds) {
    int score = 0;
    bool firstInFrame = true;

    for (char c : rounds) {
        if (c == 'X') { // Strike
            score += 10 + 10 + 10;
            firstInFrame = true;
        } else if (c == '/') { // Spare
            score += 10;
            firstInFrame = true;
        } else { // Regular roll
            int roll = c - '0';
            score += roll;

            if (!firstInFrame) {
                score += roll;
            }

            firstInFrame = false;
        }
    }

    return score;
}