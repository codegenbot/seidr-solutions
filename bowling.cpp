int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool strike = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            strike = true;
        } else if (c == '/') {
            score += currentRoll;
            currentRoll = 0;
            strike = false;
        } else {
            int roll = c - '0';
            currentRoll += roll;

            if (!strike && currentRoll >= 10) {
                score += 10 + currentRoll - 10;
                currentRoll = 0;
                strike = true;
            }
        }
    }

    return score;
}