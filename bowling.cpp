int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            currentRolls *= 10;
            currentRolls += s[i] - '0';
        } else {
            if (currentRolls > 1) {
                score += currentRolls * 2;
            } else {
                score += currentRolls;
            }
            currentRolls = 0;
        }
    }
    if (currentRolls > 1) {
        score += currentRolls * 2;
    } else {
        score += currentRolls;
    }
    return score;
}