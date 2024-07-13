```cpp
#include <vector>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int roll = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += roll * 2;
                roll = 0;
                firstRollInFrame = false;
            } else {
                score += roll;
                roll = 0;
            }
        } else {
            roll++;
        }
    }

    if (!firstRollInFrame) {
        score += roll;
    } else {
        score += roll * 2;
    }

    return score;
}