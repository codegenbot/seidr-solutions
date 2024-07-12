int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += (10 - roll);
            roll++;
        } else {
            score += (c - '0');
            roll++;
        }
    }
    return score;
}