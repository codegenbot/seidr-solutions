if (currentRolls == 2) {
    if (currentScore >= 10) {
        score += 10;
    } else {
        score += currentScore;
    }
    currentScore = 0;
    inFrame = false;
    currentRolls = 0;
}