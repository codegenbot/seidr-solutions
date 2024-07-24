int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += min(10, roll * 10);
            } else {
                score += sum(roll + 1, 10 - roll);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int val = c - '0';
            roll++;
            if (roll < 2) {
                score += val * 10;
            } else {
                score += sum(1, val);
            }
        }
    }
    return score;
}

int sum(int start, int end) {
    int total = 0;
    for (int i = start; i <= end; i++) {
        total += i;
    }
    return total;
}