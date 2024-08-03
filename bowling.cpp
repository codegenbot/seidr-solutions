int bowling(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            score += max(roll - 1, 0);
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        }
    }
    score += roll;
    return score;
}