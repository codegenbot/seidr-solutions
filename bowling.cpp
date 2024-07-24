int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1);
            roll = 0;
        } else {
            int val = c - '0';
            if (roll < 2) {
                score += val;
                roll++;
            } else {
                if (val + 10 > 10) {
                    score += 10;
                } else {
                    score += val;
                }
                roll = 0;
            }
        }
    }
    return score;
}