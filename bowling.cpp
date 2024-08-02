```cpp
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    int rolls = 0;

    std::stringstream ss(s);

    char c;
    int frameScore = 0;

    while (ss >> c) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (isdigit(c)) {
            int strike = c - '0';
            if (ss.peek() == '/') {
                frameScore = 10 - strike / 2;
                ss.ignore();
            } else {
                frameScore = strike;
            }
            if (frameScore == 10) {
                score += 10;
                rolls++;
                continue;
            }
            score += frameScore;
            rolls++;

            if (ss.peek() != '/') {
                int nextRoll = c - '0';
                if (ss.peek() == '/') {
                    frameScore += 10 - nextRoll / 2;
                    ss.ignore();
                } else {
                    frameScore += nextRoll;
                }
                score += frameScore;
                rolls++;
            }
        } else if (c == '/') {
            score += 10 - frameScore;
            rolls++;
            frameScore = 0;
        }
    }

    return score;
}