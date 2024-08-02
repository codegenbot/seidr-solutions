int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + bonus(roll1, roll2);
            roll1 = 0;
            roll2 = 0;
        } else if (s[i] == '/') {
            if (s[i - 1] != 'X' && s[i - 1] != '/') {
                roll1 = 10 - (10 - (i % 2 ? 5 : 10));
                score += roll1 + bonus(roll1, roll2);
                roll1 = 0;
            } else if (s[i - 1] == 'X') {
                score += 10 + bonus(roll1, roll2);
                roll1 = 0;
                roll2 = 0;
            }
        } else {
            if (i % 2) {
                roll2 = roll2 * 10 + (s[i] - '0');
            } else {
                roll1 = roll1 * 10 + (s[i] - '0');
            }
        }
    }
    return score;
}

int bonus(int r1, int r2) {
    if (r1 == 10 && r2 > 0)
        return r2;
    if (r1 + r2 >= 10)
        return r2;
    return 0;
}