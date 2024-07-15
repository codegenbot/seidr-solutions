if (currentRolls == 1 && currentScore + pinsThisFrame >= 10) {
    score += 10 - currentScore;
} else if (currentRolls == 2) {
    score += currentScore;
    if (currentScore == 10) inFrame = false;
    currentScore = 0;
    currentRolls = 0;
} else {
    score += pinsThisFrame;
    if (inFrame) {
        if (currentRolls == 1 && currentScore + pinsThisFrame < 10) inFrame = false;
    }
}