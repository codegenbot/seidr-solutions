int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            score += min(10, roll);
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else {
            int val = c - '0';
            roll += val;
        }
    }

    if (roll > 0) {
        score += min(10, roll);
    } else if (roll == 10) {
        score += 10;
    }

    return score;
}