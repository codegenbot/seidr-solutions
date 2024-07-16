int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
            lastRoll = true;
        } else if (c == '/') {
            score += (10 - (int)(s[roll] - '0')) + (10 - (int)(s[roll+1] - '0'));
            roll += 2;
            lastRoll = true;
        } else {
            int points = (int)(c - '0');
            if (lastRoll) {
                score += points * 2;
            } else {
                score += points;
            }
            roll++;
            lastRoll = false;
        }
    }

    return score;
}