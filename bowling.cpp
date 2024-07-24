int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            currentFrame++;
        } else if (c == '/') {
            int previousRoll = currentRolls - '0';
            score += previousRoll;
            currentRolls = 0;
            currentFrame++;
        } else {
            currentRolls *= 10 + (c - '0');
        }
    }

    return score;
}