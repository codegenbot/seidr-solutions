int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - (roll == 1));
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else {
            int val = c - '0';
            if (roll < 2) {
                score += val;
                roll++;
            } else {
                score += val + (roll == 1 ? 10 : 20);
                roll = 0;
            }
        }
    }
    return score;
}