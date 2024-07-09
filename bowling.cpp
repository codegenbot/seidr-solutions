```cpp
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    bool lastRoll = false;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            lastRoll = true;
        } else if (c == '/') {
            score += 10 - (2 * (input[1] - '0'));
            lastRoll = true;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (!lastRoll) {
                score += roll;
            } else {
                score += roll + input[1] - '0';
            }
            lastRoll = false;
        }
    }
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    int score = bowlingScore(input);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}