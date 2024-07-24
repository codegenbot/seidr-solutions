int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int totalRolls = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 3;
        } else if (c == '/') {
            score += 10 + (10 - (currentRolls % 2));
            currentRolls = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            totalRolls++;

            if (totalRolls == 10) {
                break;
            }
        }
    }

    return score;
}