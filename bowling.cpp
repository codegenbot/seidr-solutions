int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll++;
        } else {
            score += stoi(string(1, c));
            currentRoll = 0;
        }
    }
    return score;
}