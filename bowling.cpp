int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            inFrame = true;
            score += currentRoll;
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll = currentRoll * 10 + (c - '0');
        } else if (c == 'X') {
            score += 30;
            inFrame = false;
            currentRoll = 0;
        }
    }
    if (inFrame) {
        score += currentRoll;
    }
    return score;
}