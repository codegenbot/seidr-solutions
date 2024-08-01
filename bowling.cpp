int bowlingScore(string s) {
    int score = 0;
    bool firstBallInFrame = true;
    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            firstBallInFrame = true;
        } else if (c == '/') { // spare
            score += 10 + 0 + 10 - 1; // minus one because we have to add the next ball score later
            firstBallInFrame = false;
        } else {
            int frameScore = c - '0';
            if (!firstBallInFrame) { // second ball in a frame
                if (frameScore == 10) { // spare
                    score += 10 + 10;
                } else { // open frame
                    score += frameScore + frameScore;
                }
            } else {
                score += frameScore;
                firstBallInFrame = false;
            }
        }
    }
    return score;
}