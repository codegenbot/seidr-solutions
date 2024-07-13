int bowlingScore(const string& bowls) {
    int score = 0;
    int roll = 0;
    bool firstRollInFrame = true;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10 + (firstRollInFrame ? 10 : 0);
            roll++;
            firstRollInFrame = false;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                roll += 2;
            } else if (roll < 2) {
                score += pins;
            } else {
                score += pins + (firstRollInFrame ? 10 : 0);
                roll++;
                firstRollInFrame = false;
            }
        } else {
            score += 10;
            roll += 2;
        }
    }

    return score;
}