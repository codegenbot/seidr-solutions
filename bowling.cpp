int bowlingScore(string input) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') { // Strike
            score += 10 + (i < 8 ? 10 : 0);
        } else if (input[i] == '/') { // Spare
            score += 10;
            roll1 = input[i+1] - '0';
            roll2 = input[i+2] - '0';
            score += roll1 + roll2;
            i++;
        } else {
            roll1 = input[i] - '0';
            roll2 = input[i+1] - '0';
            if (roll1 + roll2 == 10) { // Spare
                score += roll1 + roll2;
                i++;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}