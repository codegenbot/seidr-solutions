int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    for (char c : str) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - roll;
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else {
            int pins = c - '0';
            roll++;
            if (roll > 1) {
                score += pins + 10;
            } else {
                score += pins;
            }
        }
    }
    return score;
}