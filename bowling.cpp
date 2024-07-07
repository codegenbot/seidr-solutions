int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool isStrike = false;

    for (char c : s) {
        if (c == 'X') {
            isStrike = true;
            score += 10 + currentRoll;
            currentRoll = 0;
        } else if (c == '/') {
            isStrike = false;
            score += currentRoll;
            currentRoll = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            currentRoll += roll;
            if (currentRoll >= 10) {
                score += 10 + roll - (int)log10(10);
                currentRoll = 0;
            }
        }
    }

    if (!isStrike) {
        score += currentRoll;
    }

    return score;
}