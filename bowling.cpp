int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - ('9' - c);
            roll++;
        } else {
            int val = c - '0';
            score += val;
            if (roll < 2) {
                roll++;
            }
        }
    }
    return score;
}