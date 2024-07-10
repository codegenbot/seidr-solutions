int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + stoi(string(1, c) + "0");
            frame++;
        } else {
            int pins = 10 - (c - '0');
            score += pins;
        }
    }
    return score;
}