int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            lastRollWasStrike = true;
        } else if (c == '/') {
            score += 10 + (lastRollWasStrike ? 20 : 0);
            lastRollWasStrike = false;
        } else {
            int roll = c - '0';
            score += roll;
            if (!lastRollWasStrike) {
                if (roll < 5) {
                    score += roll * 2;
                } else {
                    score += 10 + (roll - 5) * 2;
                }
            }
            lastRollWasStrike = false;
        }
    }
    return score;
}