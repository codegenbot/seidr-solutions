int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += roll;
            roll = 0;
        } else {
            roll += (c - '0');
        }
    }
    score += roll;
    return score;
}