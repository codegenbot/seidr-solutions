int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - roll;
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        } else {
            score += roll;
            roll = 0;
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;
}