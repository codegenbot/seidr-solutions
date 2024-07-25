int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    for (char c : str) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int val = c - '0';
            roll++;
            if (roll < 2) {
                score += val;
            } else {
                score += val + val;
            }
        }
    }
    return score;
}