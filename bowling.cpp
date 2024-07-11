```cpp
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            int roll = s.find('/');
            score += min(10 - (roll - '0'), 10);
            currentFrame++;
        } else if (isdigit(c)) {
            int value = c - '0';
            if (currentFrame < 10 && isdigit(s[s.length() - 1])) {
                value += s[s.length() - 1] - '0';
                score += 10;
            } else {
                score += value;
            }
            currentFrame++;
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        }
    }
    return score;
}