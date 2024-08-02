int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c != '/') {
            roll++;
            if (isdigit(c)) {
                score += c - '0';
                if (roll == 2) {
                    if (score >= 10) {
                        score += score;
                    }
                    roll = 0;
                    score = 0;
                }
            } else if (c == 'X') {
                score += 10;
                roll = 0;
                score = 0;
            }
        } else {
            roll = 0;
            score = 0;
        }
    }
    return score;
}