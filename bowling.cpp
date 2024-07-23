int calculateFrameScore(int bowlScore, int index, const std::string& bowls) {
    if (bowls.length() == 0) {
        return 0;
    }
    
    if (bowls.at(index) == 'X') {
        return 10 + ((index + 1 < bowls.length() && bowls.at(index + 1) == 'X') ? 10 : (bowls.at(index + 1) - '0' - '0')) + ((index + 2 < bowls.length() && bowls.at(index + 2) == 'X') ? 10 : (bowls.at(index + 2) - '0' - '0'));
    } else if (index % 2 == 1 && bowls.at(index) == '/') {
        return 10 - (bowls.at(index - 1) - '0' - '0') + ((index + 1 < bowls.length() && bowls.at(index + 1) == 'X') ? 10 : (bowls.at(index + 1) - '0' - '0'));
    } else {
        return bowlScore;
    }
}

int main() {
    std::string bowls = "X7/9-X-88/-6XXX81";
    int score = 0;

    // Calculate the score for the 5th frame (index 8)
    score = calculateFrameScore(score, 8, bowls);
    
    std::cout << "Frame 5 score: " << score << std::endl;

    return 0;
}