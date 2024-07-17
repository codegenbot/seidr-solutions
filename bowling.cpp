#include <vector>

int bowlingScore(std::vector<int>& s) {
    int score = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == 10) {
            score += 10;
        } else if (s[i] + s[i+1] >= 10) {
            score += 10;
            if (s[i] + s[i+1] == 10) continue;
            if (s[i+1] == 0) {
                int bonus = bowlingScore(std::vector<int>(s.begin() + i, s.end()));
                return score + bonus;
            }
        } else {
            score += s[i] + s[i+1];
        }
    }
    return score;