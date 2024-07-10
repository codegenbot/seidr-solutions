int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - (roll == 1 ? 10 : 20));
            }
            roll = 0;
        } else if (isdigit(c)) {
            int val = c - '0';
            if (roll == 0) {
                if (val < 10) {
                    score += val;
                } else {
                    score += 10 + val - 10;
                }
            } else {
                roll++;
                if (val < 10) {
                    score += val;
                } else {
                    score += 10 + val - 10;
                }
            }
        }
    }
    return score;
}