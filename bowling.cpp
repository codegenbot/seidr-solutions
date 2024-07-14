int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? roll : 10);
            roll = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
            frame++;
        } else {
            roll += c - '0';
        }
    }

    return score;
}