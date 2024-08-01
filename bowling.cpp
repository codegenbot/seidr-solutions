int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    bool spare = false;
    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else {
            currentRolls++;
            if (currentRolls > 2 && spare) {
                score += 10 + (currentRolls - 1);
                break;
            }
            if (c == 'X') {
                score += 10;
                currentRolls = 0;
                spare = false;
            } else if (c != ' ') {
                int roll = c - '0';
                score += roll;
                currentRolls = 0;
                spare = false;
            }
        }
    }
    return score;
}