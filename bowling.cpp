int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - roll, roll);
            roll = 0;
        } else if (isdigit(c)) {
            roll = roll * 10 + (c - '0');
        }
    }
    if (roll > 0)
        score += roll;
    return score;
}