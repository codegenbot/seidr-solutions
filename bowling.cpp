int calculateBowlingScore(string rolls) {
    int score = 0;
    int frame = 1;
    int rollIdx = 0;

    for (int i = 0; i < rolls.size(); i++) {
        if (frame > 10) break;

        if (rolls[i] == 'X') {
            score += 10;
            score += (rolls[i+2] == 'X') ? 10 : (rolls[i+1] - '0') + (rolls[i+2] - '0');
            rollIdx++;
            frame++;
        } else if (rolls[i] == '/') {
            score += 10 - (rolls[i-1] - '0');
            score += (rolls[i+1] == 'X') ? 10 : (rolls[i+1] - '0');
            rollIdx += 2;
            frame++;
        } else if (rolls[i] == '-') {
            score += 0;
        } else {
            score += rolls[i] - '0';
            rollIdx++;
        }
    }

    return score;
}