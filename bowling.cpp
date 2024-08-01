int bowlingScore(string input) {
    int score = 0;
    int roll = 0;
    int frame = 1;

    for (char c : input) {
        if (c == '/') {
            score += min(10 - '0', 10);
            frame++;
            roll = 0;
        } else {
            roll++;
            if (roll > 2) {
                score += min(10, '0' + c - '0') * 2;
                frame++;
                roll = 0;
            } else {
                score += '0' + c - '0';
            }
        }
    }

    return score;
}