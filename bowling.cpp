int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 - ('5' - c);
            rolls++;
        } else {
            int roll = c - '0';
            score += roll;
            rolls++;
        }
    }
    return score;
}