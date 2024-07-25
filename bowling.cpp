#include <iostream>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    total += 10 - (s[1] - '0');
    return total;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = calculateBowlingScore(input);
    std::cout << "Score: " << score << std::endl;

    return 0;
}