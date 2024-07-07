int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frameScore = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                frameScore += min(10 - to_string(c-'/').size(), 1);
            }
            currentRolls = 0;
        } else if (c != 'X') {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            frameScore += roll;
        } else {
            score += 10;
            currentRolls = 2;
            frameScore = 10;
        }
    }

    return score;
}