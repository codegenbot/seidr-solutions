#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            score += max(1, currentRoll);
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll = currentRoll * 10 + (c - '0');
        }
    }
    if (currentRoll > 0) {
        score += max(1, currentRoll);
    }
    return score;
}