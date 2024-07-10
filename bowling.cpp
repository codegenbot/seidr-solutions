```cpp
#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += (10 - ((int)s[roll] - 48)) * 2;
            roll+=2;
        } else {
            score += (int)c - 48;
            roll++;
        }
    }
    return score;
}