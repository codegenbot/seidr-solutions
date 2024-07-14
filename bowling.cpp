int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1);
            roll = 0;
        } else {
            int count = c - '0';
            score += count;
            if (count < 2) {
                roll--;
            }
        }
    }
    return score;
}