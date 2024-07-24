int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls(2, 0);

    for (char c : s) {
        if (c == 'X') {
            score += 10 + rolls[0];
            rolls.clear();
            currentRolls = 0;
        } else if (c == '/') {
            int roll1 = rolls[0], roll2 = rolls[1];
            rolls.clear();
            score += roll1 + roll2;
            currentRolls = 0;
        } else {
            if (currentRolls < 2) {
                rolls[currentRolls++] = c - '0';
            }
        }
    }

    int lastTwoRolls = 0;
    for (int i = 0; i < 2; i++) {
        lastTwoRolls += rolls[i];
    }
    score += lastTwoRolls;

    return score;
}