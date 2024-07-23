#include <iostream>

int calculateFrameScore(int s, size_t index);

int main() {
    std::string input;
    std::cin >> input;

    int totalScore = 0;
    size_t index = 0;

    for (char c : input) {
        int s = c == 'X' ? 10 : c == '/' ? 11 : c - '0';
        totalScore += calculateFrameScore(s, index);
        index++;
    }

    std::cout << totalScore << std::endl;

    return 0;
}