int bowlingScore(string s) {
    int score = 0;
    int roll1 = 0, roll2 = 0;
    for (char c : s) {
        if (c == '/') {
            score += roll1 + (roll2 > 0 ? roll2 : 10);
            roll1 = 0; roll2 = 0;
        } else if (c >= '0' && c <= '9') {
            int val = c - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                roll2 += val;
            }
        }
    }
    score += roll1 + (roll2 > 0 ? roll2 : 10);
    return score;
}