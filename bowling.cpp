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
        } else if (frame.length() > 1 && frame[1] == '/') {
            int spare = 10 - (frame[0] - '0');
            score += spare + 10;
            rolls += 2;
        } else if (isdigit(frame[0])) {
            int ball1, ball2;
            if (frame.length() > 1 && frame[1] == '/') {
                ball1 = 10 - (frame[0] - '0');
                ball2 = 10 - (frame[0] - '0') / 2;
            } else {
                ball1 = frame[0] - '0';
                if (frame.length() > 1) ball2 = frame[1] - '0';
                else ball2 = 0;
            }
            score += ball1 + ball2;
            rolls += 2;
        }
    }

    return score;
}