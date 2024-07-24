int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    bool spare = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 10;
            spare = true;
        } else if (s[i] == '/') {
            score += 10 - (10 - (roll1 + roll2));
            spare = false;
        } else {
            roll1 = s[i] - '0';
            roll2 = s[i+1] - '0';
            if (spare) {
                score += 10 + roll1 + roll2;
                spare = false;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}