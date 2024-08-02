#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    int rolls = 0;

    std::stringstream ss(s);

    for (std::string frame; getline(ss, frame, '\n'); ) {
        if (frame == "X") {
            score += 30;
            rolls++;
        } else if (frame.length() > 1 && frame[1] == '/') {
            int firstRoll = 10 - (frame[0] - '0');
            int secondRoll = 10 - firstRoll;
            score += firstRoll + secondRoll;
            rolls += 2;
        } else {
            int firstRoll = frame[0] - '0';
            int secondRoll = 10 - firstRoll;

            if (frame.length() > 1 && frame[1] == '/') {
                score += firstRoll + secondRoll / 2;
                rolls += 2;
            } else {
                score += firstRoll + secondRoll;
                rolls += 2;
            }
        }

        if (rolls >= 10) break;
    }

    return score;
}