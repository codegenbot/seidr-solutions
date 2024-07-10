#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    for (auto& c : input) {
        if (c == '/') {
            if (rollCount > 1)
                score += 10 + rollCount - 2;
            else
                score += rollCount * 10;
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += rollCount;
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> input;
    int result = bowlingScore(input);
    std::cout << "The total score is: " << result << std::endl;
    return 0;
}