int bowlingScore(string input) {
    int score = 0;
    int rolls = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 - (10 - (rolls % 2 ? 1 : 2)) + (rolls % 2 ? 0 : 9);
            rolls++;
        } else {
            int currentRoll = c - '0';
            if (currentRoll == 10) {
                score += 10;
                rolls++;
            } else {
                score += currentRoll;
                rolls++;
            }
        }
    }
    return score;
}