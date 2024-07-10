int bowlingScore(const string& input) {
    int score = 0;
    int frame = 1;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else {
            int points = c - '0';
            score += points + (frame > 1 ? 10 : 0);
        }
    }
    return score;
}