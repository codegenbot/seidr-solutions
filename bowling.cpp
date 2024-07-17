int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool firstRoll = true;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else {
            int pins = c - '0';
            roll += pins;

            if (roll == 10) {
                score += 10 + (firstRoll ? 10 : 0);
                firstRoll = false;
            }
        }
    }

    return score;
}