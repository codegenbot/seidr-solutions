int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += roll * 10 + min(roll, 10);
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        }
    }
    score += roll * 10;
    return score;
}