int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 10) score += min(10 - roll, 10);
            else score += 10;
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10 + (c - '0');
        }
    }
    if (roll > 0) score += roll;
    return score;
}