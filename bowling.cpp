int bowlingScore(const string& input) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    int lastRollWasStrike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10 + ((lastRollWasStrike) ? 10 : 20);
            frame++;
            lastRollWasStrike = true;
        } else if (c == '/') {
            score += (frame < 3 || rolls > 1) ? 10 : 5;
            frame++;
            lastRollWasStrike = false;
            rolls = 0;
        } else if (c >= '1' && c <= '9') {
            int roll = (c - '0');
            if (!lastRollWasStrike) {
                score += roll + ((rolls > 0) ? 10 : 5);
            }
            rolls++;
            lastRollWasStrike = false;
        }
    }

    return score;
}