int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += max(roll, 10);
            roll = 0;
        } else if (c == 'X') {
            score += 10 + max(roll, 10);
            roll = 0;
        } else {
            int temp = c - '0';
            roll += temp;
        }
    }
    score += max(roll, 10);
    return score;
}