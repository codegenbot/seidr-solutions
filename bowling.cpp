int bowlingScore(string &s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - frame * 2;
            frame++;
        } else {
            int spare = c - '0';
            score += spare + (frame < 9 ? spare : 0);
            frame++;
        }
    }
    return score;
}