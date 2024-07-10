int bowlingScore(string s) {
    int score = 0;
    bool firstInFrame = true;
    for (char c : s) {
        if (c == '/') {
            firstInFrame = false;
        } else if (isdigit(c)) {
            if (firstInFrame) {
                score += (int)(c - '0') * 2 + (10 - int(s.find('/')) / 2);
            } else {
                score += (int)(c - '0');
            }
            firstInFrame = true;
        }
    }
    return score;
}