int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            roll1 = s[i - 1] - '0';
            roll2 = 10 - roll1;
        } else {
            roll1 = s[i] - '0';
            roll2 = 0;
        }
        score += getRollScore(roll1, roll2);
    }
    return score;
}

int getRollScore(int roll1, int roll2) {
    if (roll1 + roll2 >= 10) {
        return 10 + getRollScore(0, roll2);
    } else {
        return roll1 + roll2;
    }
}