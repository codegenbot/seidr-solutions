int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (inFrame ? 10 : 0);
            inFrame = true;
        } else if (c == '/') {
            inFrame = false;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (!inFrame) {
                score += pins;
            } else {
                if (pins + 10 > 10) {
                    score += 10;
                } else {
                    score += pins + 10;
                }
            }
        }
    }
    return score;
}