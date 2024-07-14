int bowlingScore(string str) {
    int score = 0;
    bool lastRollWasStrike = false;

    for (int i = 0; i < 10; ++i) {
        if (str[i] == 'X') {
            score += 30;
            lastRollWasStrike = true;
        } else if (str[i] == '/') {
            int currentRoll = str[i - 1] - '0';
            score += currentRoll + 10;
            if (!lastRollWasStrike) score += currentRoll;
            lastRollWasStrike = false;
        } else {
            int currentRoll = str[i] - '0' + (str[i + 1] == 'X' ? 10 : str[i + 1] - '0');
            score += currentRoll;
            if (!lastRollWasStrike) score += currentRoll;
            lastRollWasStrike = false;
        }
    }

    return score;
}