int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool spareOrStrike = false;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
            spareOrStrike = true;
        } else if (c >= '1' && c <= '9') {
            roll++;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
            spareOrStrike = true;
        }
    }

    if (roll > 1) {
        score += roll * 10;
    } else if (roll == 1) {
        if (spareOrStrike) {
            score += roll * 10;
        } else {
            score += roll * 10 / 2;
        }
    }
    return score;
}