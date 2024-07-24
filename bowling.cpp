int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll * 10);
            roll++;
        } else {
            int count = c - '0';
            if (count == 1 || count == 2) {
                score += count * 10;
                roll++;
            } else {
                score += count * 10 + 10;
                roll++;
            }
        }
    }
    return score;
}