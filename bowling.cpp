int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - (roll == 1));
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
            int value = c - '0';
            if (roll == 1) {
                score += value;
            } else {
                score += value * 2;
            }
        }
    }
    return score;
}