int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - (roll * 2));
            }
            roll = 0;
        } else {
            roll++;
        }
        if (isdigit(c)) {
            int val = c - '0';
            if (roll < 2) {
                score += val;
            } else {
                score += val + (val);
            }
        }
    }
    return score;
}