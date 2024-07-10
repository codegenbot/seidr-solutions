```cpp
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (!firstInFrame) {
                score += 10 + (input.find(c) + 1 == input.size() ? 0 : input[input.find(c) + 1] - '0' + input[input.find(c) + 2] - '0');
            }
        } else if (c == '/') {
            score += 10 - score;
            firstInFrame = true;
        } else {
            int pins = c - '0';
            if (!firstInFrame) {
                if (score + pins >= 10) {
                    score += 10 - score;
                } else {
                    score += pins;
                }
            } else {
                score += pins;
            }
            firstInFrame = false;
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