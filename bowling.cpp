```cpp
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    int rolls = 0;

    std::istringstream iss(s);
    std::string frame;

    while (std::getline(iss, frame)) {
        if (frame == "X") {
            score += 30;
            rolls++;
        } else if (frame.length() > 1 && frame[1] == '/') {
            int spare = 10 - (frame[0] - '0');
            score += spare;
            rolls++;
        } else {
            int strike = 10 - (frame[0] - '0');
            score += strike;
            rolls++;
        }
    }

    return score;
}