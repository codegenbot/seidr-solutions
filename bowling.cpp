int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            frame++;
        } else {
            int roll = c - '0';
            currentRolls += roll;
            if (currentRolls >= 10) {
                score += 10;
                currentRolls = 0;
                frame++;
            }
        }
    }

    return score;
}