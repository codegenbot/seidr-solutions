int bowlingScore(string input) {
    int frames = 0;
    int currentRolls = 0;
    int totalScore = 0;

    for (char c : input) {
        if (c == '/') {
            totalScore += min(10 - currentRolls, currentRolls);
            currentRolls = 0;
            frames++;
        } else {
            currentRolls++;
        }
    }

    if (currentRolls > 0) {
        totalScore += min(10, currentRolls);
    }

    return totalScore;
}