int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10;
            rolls++;
        } else {
            int currentRoll = c - '0';
            score += currentRoll;
            rolls++;
        }
    }
    return score;
}