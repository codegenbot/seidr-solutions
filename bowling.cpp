int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else if (isdigit(c)) {
            int pins = c - '0';
            score += pins;
            if (roll < 2) {
                roll++;
            }
        }
    }
    return score;
}