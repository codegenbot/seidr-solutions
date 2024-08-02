int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentRolls > 0) {
                score += max(currentRolls, 10 - currentRolls);
            }
            currentRolls = 0;
        } else if (isdigit(s[i])) {
            currentRolls *= 10;
            currentRolls += s[i] - '0';
        }
    }
    if (currentRolls > 0) {
        score += max(currentRolls, 10 - currentRolls);
    }
    return score;
}