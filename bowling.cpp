int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10;
            } else {
                score += roll * 2 + 10;
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
            if (c != 'X') {
                score += c - '0';
            }
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        }
    }
    return score;
}