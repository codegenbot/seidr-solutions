```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            int rolls = 2;
            while (rolls--) {
                if (s.substr(s.find('/'), 3).find('X') != std::string::npos) {
                    score += 10;
                } else if (isdigit(s[s.find('/') + 1])) {
                    score += min(10 - '0', 10);
                } else {
                    int roll = s[s.find('/') + 1] - '0';
                    if (roll == 1) rolls--;
                    score += roll;
                }
            }
            currentFrame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (currentFrame < 10 && isdigit(s[s.length() - 1])) {
                score += 10;
                break;
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        } 
    }
    return score;
}