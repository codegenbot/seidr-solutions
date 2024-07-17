int bowlingScore(const string& input) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; ++i) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i + 1] == '/') {
            roll1 = input[i] - '0';
            roll2 = 10 - roll1;
            score += roll1 * 10 + roll2;
        } else {
            roll1 = input[i] - '0';
            roll2 = input[i + 1] - '0';
            if (roll1 + roll2 >= 10) {
                score += roll1 * 10 + roll2;
            } else {
                score += roll1 * 10 + roll2;
            }
        }
    }
    return score;
}