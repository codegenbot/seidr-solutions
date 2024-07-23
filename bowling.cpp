int calculateFrameScore(int bowlScore, size_t index) {
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
    size_t index = 0;
    for (char bowl : bowls) {
        int bowlScore = bowl - '0';
        totalScore += calculateFrameScore(bowlScore, index);
        index++;
    }
    
    std::cout << totalScore << std::endl;
    
    return 0;
}