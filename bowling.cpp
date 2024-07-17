int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - ('X' - c);
            roll++;
        } else {
            int strike = c - '0';
            score += strike;
            roll++;
        }
    }
    return score;
}