int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2)
                score += min(10, roll);
            else
                score += sum(roll);
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int val = c - '0';
            roll += val;
        }
    }
    if (roll < 2)
        score += min(10, roll);
    else
        score += sum(roll);
    return score;
}

int sum(int n) {
    return n * (n + 1) / 2;
}