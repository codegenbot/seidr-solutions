int bowling(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else {
            if (roll < 2) {
                score += (c - '0') * 10 + (int)(10 - c - '0');
                roll++;
            }
        }
    }
    return score;
}