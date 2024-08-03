int bowlingScore(const string& frames) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (frames[i] == '/') {
            roll1 = frames[i - 1] - '0';
            roll2 = frames[i + 1] - '0';
            score += roll1 + roll2;
        } else {
            score += frames[i] - '0';
        }
    }

    return score;
}