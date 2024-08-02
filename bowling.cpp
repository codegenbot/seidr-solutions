int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 0;
        } else if (c == '/') {
            score += 10 + min(max(1, stoi(string(1, c))), 10);
            currentRolls = 0;
        } else {
            int thisRoll = stoi(string(1, c));
            score += thisRoll;
            currentRolls++;
            if (currentRolls == 2) {
                if (thisRoll + min(max(thisRoll, 1), 10) >= 10) {
                    score += 10;
                } else {
                    score += thisRoll + min(max(thisRoll, 1), 10);
                }
                currentRolls = 0;
            }
        }
    }
    return score;
}