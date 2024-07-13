int bowling(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll >= 1 && currentRoll <= 2) {
                score += min(10, currentRoll);
                currentRoll = 0;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        } else {
            score += currentRoll;
            currentRoll = 0;
        }
    }
    if (currentRoll >= 1 && currentRoll <= 2) {
        score += min(10, currentRoll);
    }
    return score;
}