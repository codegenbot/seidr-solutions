int calculateFrameScore(int bowlScore, size_t index) {
    // Function definition goes here
    return bowlScore;
}

#include <iostream>

int main() {
    std::string bowls;
    std::cin >> bowls;
    
    int totalScore = 0;
    size_t index = 0;
    for (char bowl : bowls) {
        int bowlScore = bowl - '0';
        totalScore += calculateFrameScore(bowlScore, index);
        index++;
    }
    
    std::cout << totalScore << std::endl;
    
    return 0;
}