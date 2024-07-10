int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    for (char c : input) {
        if (c == '/') {
            if (rollCount >= 2) {
                if (rollCount == 10) {
                    score += 30;
                } else {
                    score += rollCount * 10;
                }
            } else {
                score += rollCount * 10;
            }
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            if (rollCount > 1) {
                score += (rollCount - 1) * 10 + (c - '0');
            } else {
                rollCount *= 10 + (c - '0');
            }
        }
    }
    if (rollCount >= 2) {
        if (rollCount == 10) {
            score += 30;
        } else {
            score += rollCount * 10;
        }
    } else {
        score += rollCount * 10;
    }
    return score;
}