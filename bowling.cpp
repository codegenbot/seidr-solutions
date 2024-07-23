#include <iostream>
#include <string>

int calculateFrameScore(int bowlScore, size_t index, const std::string& bowls) {
    if (bowlScore == 10) {
        return 10 + (index < 18 ? (bowls[index + 1] - '0') + (bowls[index + 2] - '0') : 0);
    } else {
        return bowlScore;
    }
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int totalScore = 0;
    for (size_t index = 0; index < bowls.size(); ++index) {
        int bowlScore = bowls[index] - '0';
        totalScore += calculateFrameScore(bowlScore, index, bowls);
    }

    std::cout << totalScore << std::endl;

    return 0;
}