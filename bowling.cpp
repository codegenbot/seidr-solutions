int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (frame < 10 ? string(&c + 1, &s[0]).find('/') : 5);
            frame++;
        } else {
            int temp = c - '0';
            score += temp;
            if (temp < 10) {
                frame++;
            }
        }
    }
    return score;
}