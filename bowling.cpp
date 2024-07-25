int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += (10 - '0') * 10 + roll;
            roll = 0;
        } else {
            roll = roll * 10 + c - '0';
        }
    }
    return score + roll;
}