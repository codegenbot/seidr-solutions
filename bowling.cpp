int bowlingScore(string str) {
    int score = 0;
    int frame = 0;
    for (char c : str) {
        if (c >= 'X' && c <= 'Z') {
            score += 10;
        } else if (c >= '1' && c <= '9') {
            score += (c - '0');
            frame++;
            if (frame < 10) {
                if (str[frame * 2] == '/') {
                    score -= (c - '0');
                }
            }
        } else if (c == '/') {
            score -= (str[frame * 2 - 1] - '0');
        }
    }
    return score;
}