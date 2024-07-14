int bowlingScore(const string& input) {
    int score = 0;
    int frames = 0;
    for (char c : input) {
        if (c >= 'X') {
            if (c == 'X') {
                score += 10;
            } else {
                int bonus = 10 - (c - '0');
                score += 10 + bonus;
            }
            frames++;
        } else if (c == '/') {
            score += 10;
            frames++;
        } else {
            if (frames < 9) {
                score += c - '0';
            } else {
                score += c - '0' + (input[frames + 1] - '0');
            }
            frames++;
        }
    }
    return score;
}