```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            frame++;
        } else if (c == '/') {
            score += 10 - (s[s.find('/') - 1] - '0');
            frame++;
        } else {
            int roll = c - '0';
            score += roll;
            if (frame < 9 && s[s.find(std::to_string(roll)) + std::to_string(roll).length()] == '/') {
                score += roll;
                frame++;
            }
        }
    }
    return score;
}