int bowlingScore(string input) {
    int score = 0;
    int currentRolls = 0;
    for (char c : input) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += min((int)(10 - '0'), (int)(10 - 'X')) * 10;
            } else {
                score += currentRolls * 10;
            }
            currentRolls = 0;
        } else if (c == 'X') {
            score += 10 + 10;
            currentRolls = 0;
        } else {
            currentRolls++;
        }
    }
    if (currentRolls < 2) {
        score += min((int)(10 - '0'), (int)(10 - 'X')) * 10;
    } else {
        score += currentRolls * 10;
    }
    return score;
}