int bowlingScore(string str) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (str[i] == 'X') {
            score += 30;
        } else if (str[i] == '/') {
            roll1 = str[i-1] - '0';
            roll2 = str[i+1] - '0';
            score += roll1 + roll2;
        } else {
            roll1 = str[i] - '0';
            roll2 = str[i+1] - '0';
            if (roll1 + roll2 >= 10) {
                score += roll1 + roll2 + 10;
                i++;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}