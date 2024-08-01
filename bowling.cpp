int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - (roll == 1 ?stoi(string(1,c)) : stoi(string(1,c-48))));
            }
            roll = 0;
        } else if (c >= 'X' && c <= '9') {
            int val = c - '0';
            if (val < 10) {
                score += val;
            } else {
                score += 10 + (roll == 1 ? stoi(string(1,c-48)) : stoi(string(1,c-48)));
            }
            roll++;
        }
    }
    return score;
}