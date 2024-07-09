```cpp
#include <string>
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    std::stringstream ss(s);
    std::string line;
    while (std::getline(ss, line)) {
        int currentRoll = 0;
        for (char c : line) {
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
    }
    return score;