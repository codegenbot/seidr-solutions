int bowlingScore(string input) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            rollCount++;
        } else if (input[i] == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            rollCount++;
        } else {
            currentRoll++;
        }
    }

    return score;
}