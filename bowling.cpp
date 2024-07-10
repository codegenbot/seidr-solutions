```cpp
#include <iostream>
#include <string>

int rollCount = 0;
int roll(int pins) {
    int i;
    for (i = 0; i < pins && rollCount + i <= 10; i++) {
        rollCount += 1;
    }
    if (rollCount + i > 10) {
        return 10;
    } else {
        return rollCount + i;
    }
}

int bowlingScore(const std::string& input) {
    int score = 0;
    for (char c : input) {
        if (c == '/') {
            score += roll(0);
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += roll(0);
    return score;
}

int main() {
    std::string input; 
    int result = bowlingScore(input);
    return 0;
}