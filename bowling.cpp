int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : s) {
        if (c == '/') {
            lastRoll = true;
        } else {
            int strikeOrSpare = (lastRoll ? 10 : (c - '0'));
            score += strikeOrSpare;
            roll++;
            lastRoll = false;
        }
    }

    return score;
}