int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 0;

    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            roll++;
            frame++;
        } else if (isdigit(c)) {
            score += c - '0';
            roll++;
            if (roll < 2 && frame < 9) continue;
            if (roll == 2 && c != 'X') score += min(10, 10 - (c - '0'));
            roll = 0;
        } else {
            score += 10;
            roll = 1;
        }
        if (frame >= 9) break;
    }

    return score;
}