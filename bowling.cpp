int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    bool isMaxFrame = false;
    for (char c : input) {
        if (c == '/') {
            if (rollCount > 1) {
                score += (10 - rollCount) * 10 + rollCount;
            } else {
                score += rollCount * 10;
            }
            rollCount = 0;
            isMaxFrame = false;
        } else if ('1' <= c && c <= '9') {
            int num = c - '0';
            rollCount *= 10 + num;
            if (rollCount >= 10) {
                isMaxFrame = true;
            }
        }
    }
    if (rollCount > 1 || isMaxFrame) {
        score += (10 - rollCount) * 10 + rollCount;
    } else {
        score += rollCount * 10;
    }
    return score;
}