int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            continue;
        } else if (c == '/') {
            score += 10 - ((firstRollInFrame) ? 10 : 0);
            firstRollInFrame = true;
            continue;
        }
        int thisRollScore = c - '0';
        if (firstRollInFrame) {
            score += thisRollScore;
            firstRollInFrame = false;
        } else {
            if (thisRollScore == 10) {
                score += 10 + 10;
            } else {
                score += thisRollScore;
            }
            firstRollInFrame = true;
        }
    }
    return score;
}