int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            lastRoll = true;
        } else if (c == '/') {
            score += roll + 10;
            roll = 0;
            lastRoll = true;
        } else {
            int val = c - '0';
            roll += val;
        }
    }

    return score;
}