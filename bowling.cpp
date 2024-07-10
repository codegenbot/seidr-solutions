int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - (roll * 5));
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int temp = c - '0';
            roll++;
            if (roll < 2) {
                score += temp * 10;
            } else {
                score += temp + (temp * 10);
            }
        }
    }
    return score;
}