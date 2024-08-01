int bowlingScore(string bowls) {
    int score = 0;
    int roll1, roll2, frameScore;

    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[2 * i])) {
            // Non-strike roll
            roll1 = bowls[2 * i] - '0';
            roll2 = bowls[2 * i + 1] - '0';
            frameScore = roll1 + roll2;
            score += frameScore;
        } else {
            // Strike
            if (i < 9) {
                score += 10 + bowlingScore(bowls.substr(2 * i + 1)).substr(0, 1) - '0';
            }
            score += 10;
        }

        if (bowls[2 * i] == 'X') {
            // Strike
            if (i < 9) {
                score += 10 + bowlingScore(bowls.substr(2 * i + 1)).substr(0, 1) - '0';
            }
            score += 10;
        }
    }

    return score;
}