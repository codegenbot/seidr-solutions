int bowlingScore(string s) {
    int score = 0;
    int rollCount = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rollCount++;
        } else if (c == '/') {
            score += 10 - ('X' - c);
            rollCount++;
        } else {
            int strikeOrSpare = c - '0';
            if (rollCount < 9) {
                score += strikeOrSpare;
            }
            rollCount++;
        }
    }
    return score;
}