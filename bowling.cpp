#include <iostream>
#include <vector>

int bowlingScore(std::vector<int>& s) {
    int score = 0;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == '/') {
            if (s[i - 1] + s[i] <= 10) {
                score += 10;
            } else {
                score += 10 + s[i - 1] + s[i] - 10;
            }
            i++;
        } else if (s[i] >= 1 && s[i] <= 9) {
            score += s[i];
        } else if (s[i] == 10) {
            score += 10;
            i++;
        }
    }
    return score;