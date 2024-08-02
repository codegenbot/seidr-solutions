```cpp
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    int rolls = 0;

    std::istringstream iss(s);
    std::string frame;

    while (std::getline(iss, frame, ' ')) {
        if (frame == "X") {
            score += 30;
            rolls++;
        } else if (frame.size() > 1 && frame[1] == '/') {
            int spare = 10 - (frame[0] - '0');
            score += spare + 10;
            rolls+=2;
        } else {
            int roll = std::stoi(frame);
            score += roll;
            rolls++;
            if (roll < 10) {
                score += std::stoi(iss.str().substr(0, iss.str().find(' ')).erase(0, iss.str().find_first_of("0123456789") + 1));
                rolls++;
            }
        }

        if (rolls >= 10) break;
    }

    return score;
}