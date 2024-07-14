int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 + (10 - ((rolls % 2)?1:2));
            rolls++;
        } else {
            int count = c - '0';
            score += count;
            rolls++;
        }
    }
    return score;
}