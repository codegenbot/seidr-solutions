int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int frameScore = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + frameScore;
            frameScore = 0;
            inFrame = false;
        } else if (c == '/') {
            score += 10 - frameScore;
            frameScore = 0;
            inFrame = true;
        } else if (isdigit(c)) {
            int num = c - '0';
            if (!inFrame) {
                frameScore += num;
            } else {
                score += num;
            }
        }
    }

    return score;
}