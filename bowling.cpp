int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else {
            int points = c - '0';
            if (points == 1 || points == 2 || points == 3) {
                score += points * 10 + 10;
                frame++;
            } else {
                score += points * 10;
                frame++;
            }
        }
    }
    return score;
}