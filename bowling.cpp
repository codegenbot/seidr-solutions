```cpp
#include <string>
#include <cctype>

int bowlingScore(const std::string& frames) {
    int score = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 - ((frames.find('/') - 1) / 2);
        } else if (std::isdigit(c)) {
            int roll = c - '0';
            if (frames.length() > 1 && frames[frames.find(c)] == '/') {
                score += 10 - roll;
            } else {
                score += roll;
            }
        }
    }
    return score;
}