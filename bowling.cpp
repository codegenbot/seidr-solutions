int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - to_string(roll).back() - '0');
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        }
    }
    return score;
}