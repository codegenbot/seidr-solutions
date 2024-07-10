int bowlingScore(string s) {
    int score = 0;
    bool previousStrike = false;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + (previousStrike ? 10 : 2 * 10);
            previousStrike = true;
        } else if (c == '/') { // spare
            score += 10 + (previousStrike ? 0 : 1 + 10);
            previousStrike = false;
        } else {
            int count = c - '0';
            score += count;
            previousStrike = false;
        }
    }

    return score;
}