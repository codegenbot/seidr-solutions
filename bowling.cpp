#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += std::max(firstRoll, secondRoll);
        } else if (s[i] >= 'X') {
            score += 10;
        } else {
            int roll = s[i] - '0';
            score += roll;
        }
    }
    return score;
}