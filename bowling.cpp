if (currentRolls == 1 && currentScore > 9) {
    score += 10 + strikeBonus;
    inFrame = false;
    currentScore = 0;
    currentRolls = 0;
} else if (currentRolls == 2) {
    if (currentScore >= 10) {
        score += 10;
        currentScore = 0;
        currentRolls = 0;
        inFrame = false;
    } else {
        score += currentScore;
        currentScore = 0;
        currentRolls = 0;
        inFrame = false;
    }
} else if (currentRolls == 2 && !inFrame) {
    if (frameValue >= 10) {
        score += 10;
    } else {
        score += frameValue;
    }
    inFrame = false;
    currentScore = 0;
    currentRolls = 0;
}