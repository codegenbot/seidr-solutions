int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRoll ? 10 : 0);
            lastRoll = true;
        } else if (c == '/') {
            score += 10 - roll;
            lastRoll = true;
        } else {
            roll++;
            if (isdigit(c)) {
                score += c - '0';
                if (roll >= 2) {
                    lastRoll = false;
                }
            }
        }
    }

    return score;
}