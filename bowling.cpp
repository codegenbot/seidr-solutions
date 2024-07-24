int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll < 2 ? 10 : 0);
            roll = 0;
        } else {
            int val = c - '0';
            if (roll < 1) {
                score += val;
            } else {
                if (val == 10) {
                    score += 10 + (10 - roll);
                } else {
                    score += val;
                    roll++;
                }
            }
        }
    }
    return score;
}