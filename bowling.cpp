int bowlingScore(const string& input) {
    int score = 0;
    int roll1, roll2, prevRolls = 0;

    for (char c : input) {
        if (c == '/') {
            if (roll1 + roll2 >= 10)
                score += 10;
            else
                score += roll1 + roll2;
            roll1 = 0;
            roll2 = 0;
        } else if (isdigit(c)) {
            int val = c - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                roll2 = val;
            }
        }
    }

    // handle last frame
    if (prevRolls < 10) {
        score += prevRolls + max(roll1, roll2);
    } else if (roll1 + roll2 >= 10) {
        score += 10;
    } else {
        score += roll1 + roll2;
    }

    return score;
}