int bowlingScore(const std::string& input) {
    int score = 0;
    int prevRoll = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += prevRoll + input[input.find(c) + 1] - '0';
        } else {
            int roll = c - '0';
            if (prevRoll != 0) {
                score += prevRoll * 2 + roll;
            } else {
                score += roll;
            }
            prevRoll = roll;
        }
    }

    return score;
}