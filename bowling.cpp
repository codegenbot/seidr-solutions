#include <vector>
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    bool isPreviousFrameStrike = false;
    for (char c : s) {
        if (c == 'X') {
            // Strike, add 10 + next two frames
            score += 10;
            isPreviousFrameStrike = true;
        } else if (c == '/') {
            // Spare, add 10 - previous frame's last bowl
            score += 10 - s[s.find(c) - 1] - '0';
            isPreviousFrameStrike = false;
        } else {
            int bowl = c - '0';
            if (!isPreviousFrameStrike) {
                // Add current bowl to the score
                score += bowl;
            } else {
                // Current frame strike, add this bowl to next two frames
                score += bowl;
            }
        }
    }
    return score;
}