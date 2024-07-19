int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += min(10, roll);
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10 + (c - '0');
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        }
    }
    if (roll < 2) {
        score += min(10, roll);
    }
    return score;
}