#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(10);
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                rolls[roll] = max(1, min(10, roll));
                roll++;
            }
        } else {
            int val = c - '0';
            if (roll < 2) {
                rolls[roll] += val;
            } else {
                score += max(1, min(10, rolls[0])) + max(1, min(10, rolls[1]));
                roll = 0;
                rolls[0] = val;
                rolls[1] = 0;
            }
        }
    }
    if (roll > 0) {
        score += max(1, min(10, rolls[0])) + max(1, min(10 - rolls[0], rolls[1]));
    } else if (rolls[9] > 0) {
        score += max(1, min(10, rolls[9]));
    }
    return score;