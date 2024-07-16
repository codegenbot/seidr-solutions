```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;
    for (char c : s) {
        if (c == '/') {
            inFrame = false;
            currentRolls = 0;
        } else if (inFrame) {
            ++currentRolls;
            score += c - '0';
        } else if (c >= 'X') {
            score += 10;
            inFrame = true;
        } else {
            int roll = c - '0';
            score += roll;
            if (roll == 1 || roll == 2) {
                inFrame = true;
            }
        }
    }
    return score;
}