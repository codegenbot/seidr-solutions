```cpp
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    for (char c : input) {
        if (c == '/') {
            if (rollCount > 1) {
                score += (10 - rollCount);
            }
            score += rollCount * 10;
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    if (rollCount > 1) {
        score += (10 - rollCount);
    }
    score += rollCount;
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the bowling score string: ";
    std::cin >> input;
    int score = bowlingScore(input);
    std::cout << "The total score is: " << score << std::endl;
    return 0;
}