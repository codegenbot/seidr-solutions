int bowlingScore(string input) {
    int score = 0;
    bool inFrame = false;
    int frameNumber = 1;
    for (char c : input) {
        if (c == '/') {
            inFrame = true;
        } else if (c == 'X') {
            score += 10 + (inFrame ? 10 : 0);
            inFrame = false;
            frameNumber++;
        } else if (isdigit(c)) {
            int strike = c - '0';
            if (strike > 1) {
                score += strike + (inFrame ? strike : 0);
            } else {
                score += strike * 2;
            }
            inFrame = false;
            frameNumber++;
        }
    }
    return score;
}