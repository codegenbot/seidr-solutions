int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else if (isdigit(c)) {
            int temp = c - '0';
            if (roll > 0) {
                score += temp + roll;
                roll = 0;
            } else {
                roll = temp;
            }
        }
    }
    if (roll > 1) {
        score += 10 + roll;
    } else if (roll == 1) {
        score += roll;
    }
    return score;
}