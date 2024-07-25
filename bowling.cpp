int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 10) {
                score += 10 - roll;
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10 + (10 - roll);
            roll = 0;
        } else {
            roll++;
            if (c >= '1' && c <= '9') {
                score += c - '0';
            }
        }
    }
    return score;
}