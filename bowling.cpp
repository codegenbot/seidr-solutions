```cpp
#include <string>
#include <algorithm>

int bowlingScore(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + std::max((s.find('/', 1) - 1), 1);
        } else {
            int points = c - '0';
            score += points;
            if (s.find('/') != std::string::npos && s.find('/') - 1 == s.size() - 2) {
                score += points * 2;
            }
        }
    }
    return score;
}