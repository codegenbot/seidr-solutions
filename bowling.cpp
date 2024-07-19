int bowlingScore(string bowls) {
    int score = 0;
    int roll = 0;
    bool firstRollOfTurn = true;

    for (char c : bowls) {
        if (c == 'X') { // strike
            score += 10 + getBonus(roll);
            roll = 0;
        } else if (c == '/') { // spare
            score += 10 + getBonus(1);
            roll = 2 - firstRollOfTurn;
            firstRollOfTurn = false;
        } else {
            int pinsKnockedDown = c - '0';
            score += pinsKnockedDown;
            roll++;
            if (roll == 2) {
                firstRollOfTurn = true;
            }
        }
    }

    return score;
}

int getBonus(int rollsRemainingThisTurn) {
    if (rollsRemainingThisTurn < 1) {
        return 0;
    } else if (rollsRemainingThisTurn < 2) {
        // one roll remaining
        int pinsKnockedDown = 10 - (roll - firstRollOfTurn);
        return pinsKnockedDown;
    } else {
        return 10;
    }
}