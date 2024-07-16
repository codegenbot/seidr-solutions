#include <string>

int bowlingScore(int s) {
    int score = 0;
    std::string str = std::to_string(s);
    int currentRoll = 0;
    for (auto it = str.begin(); it != str.end(); ++it) {
        char c = *it;
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}