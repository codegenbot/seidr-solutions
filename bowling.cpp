int bowlingScore(const string& input) {
    int score = 0;
    int roll = 0;
    for (char c : input) {
        if (c >= 'X' && c <= 'Z') {
            score += 10 + roll;
            roll = 0;
        } else if (c == '/') {
            score += roll;
            roll = 0;
        } else if (isdigit(c)) {
            int count = c - '0';
            while (count--) {
                if (roll < 2) {
                    roll++;
                } else {
                    score += roll;
                    roll = 0;
                }
            }
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;
}