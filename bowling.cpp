int bowlingScore(string s) {
    int score = 0;
    bool isPreviousRollStrike = false;
    bool isPreviousRollSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (isPreviousRollStrike ? 10 : (isPreviousRollSpare ? 10 - score % 10 : 0));
            isPreviousRollStrike = true;
            isPreviousRollSpare = false;
        } else if (c == '/') {
            score += (isPreviousRollStrike ? 10 : (isPreviousRollSpare ? 10 - score % 10 : 0)) + 10;
            isPreviousRollStrike = false;
            isPreviousRollSpare = true;
        } else {
            int roll = c - '0';
            if (isPreviousRollStrike) {
                score += roll;
            } else if (isPreviousRollSpare) {
                score += roll;
                isPreviousRollSpare = false;
            } else {
                score += roll + (roll < 10 ? roll : 10);
            }
        }
    }

    return score;
}