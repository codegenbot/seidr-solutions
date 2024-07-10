int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    bool strikeOrSpare = false;
    for (char c : input) {
        if (c == '|') {
            if (!firstInFrame && !strikeOrSpare) {
                if (score < 10) {
                    score += 10 - score;
                } else {
                    score += 10;
                }
            }
            firstInFrame = true;
            strikeOrSpare = false;
        } else if (c == 'X') {
            score += 10;
            if (!firstInFrame && !strikeOrSpare) {
                score += input[1] - '0' + input[2] - '0';
            }
            firstInFrame = true;
            strikeOrSpare = false;
        } else if (c == '-') {
            firstInFrame = true;
        } else {
            int pins = c - '0';
            score += pins;
            if (!firstInFrame) {
                if (score + pins >= 10) {
                    score += 10 - score;
                } else {
                    score += pins;
                }
                strikeOrSpare = true;
            }
            firstInFrame = false;
        }
    }
    return score;
}