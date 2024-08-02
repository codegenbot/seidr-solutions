int bowlingScore(string s) {
    int score = 0;
    bool previousStrike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            previousStrike = true;
        } else if (c == '/') {
            score += 10 + (previousStrike ? 10 : 0);
            previousStrike = false;
        } else {
            int roll = c - '0';
            if (previousStrike) {
                score += roll * 2;
            } else {
                score += roll;
            }
            previousStrike = false;
        }
    }
    return score;
}