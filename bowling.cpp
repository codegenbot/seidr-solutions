int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - (roll == 1 ? 1 : 0));
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll++;
        } else {
            int val = c - '0';
            if (val + roll <= 10) {
                score += val;
                roll++;
            } else {
                score += 10;
                roll = 0;
                score += val;
            }
        }
    }
    return score;
}