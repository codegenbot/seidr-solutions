int bowlingScore(string bowls) {
    int score = 0;
    int currentRolls = 0;
    int totalRolls = 0;

    for (char c : bowls) {
        if (c == 'X') {
            score += 30;
            currentRolls++;
            totalRolls++;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            totalRolls++;
        } else if (isdigit(c)) {
            int rolls = c - '0';
            currentRolls += rolls;
            if (totalRolls < 9) {
                if (currentRolls == 2) {
                    score += 10 + currentRolls * 10;
                    currentRolls = 0;
                }
            } else {
                score += currentRolls * 10;
            }
        }
    }

    return score;
}