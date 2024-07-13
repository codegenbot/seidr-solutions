```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10 && currentRolls < 2) {
                if (currentRolls == 1) {
                    score += 10 + (currentFrame < 10 ? bowlingScore(s.substr(0, s.find('/'))) : 0);
                } else {
                    score += 10;
                }
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;
}