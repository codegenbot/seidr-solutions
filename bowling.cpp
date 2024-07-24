int bowlingScore(string input) {
    int score = 0;
    int currentRolls = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += (10 - (10 - currentRolls)) * 2;
            currentRolls = 0;
        } else {
            int rolls = c - '0';
            score += rolls;
            currentRolls++;
        }
    }
    return score;
}