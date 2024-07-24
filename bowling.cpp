int bowlingScore(string bowls) {
    int score = 0;
    int roll = 0;

    for (char c : bowls) {
        if (c == '/') {
            score += max(10 - roll, 1);
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10 + (c - '0');
        }
    }

    score += min(roll, 10);

    return score;
}