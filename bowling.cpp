int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + roll;
            roll = 0;
        } else {
            int val = c - '0';
            if (roll < 2) {
                score += val;
                roll++;
            } else {
                score += val * 2;
                roll = 0;
            }
        }
    }
    return score;
}