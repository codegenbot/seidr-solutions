int bowlingScore(const string& input) {
    int score = 0;
    int roll = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == 'X') { // strike: 10 points
            score += 10;
            roll++;
            continue;
        }
        if (isdigit(c)) { // spare or regular roll
            int points = c - '0';
            if (!firstRollInFrame) {
                if (roll + 1 < 2) { // second roll in the same frame
                    score += points * 2; // double for a spare
                    roll++;
                } else {
                    score += points; // add to total score
                }
            } else {
                firstRollInFrame = false;
                if (points == 10) { // strike: 10 points
                    score += 10;
                    roll++;
                } else {
                    score += points; // add to total score
                }
            }
        }
    }

    return score;
}