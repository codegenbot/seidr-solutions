```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll == 10) {
                score += 10;
            } else {
                score += currentRoll;
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10 + (c - '0');
        }
    }
    if (currentRoll > 0) {
        score += max(1, currentRoll);
    }
    return score;
}