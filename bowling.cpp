int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    bool spare = false;
    bool strike = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (c == '/') {
            score += 5;
            spare = true;
        } else {
            int pins = c - '0';
            score += pins;

            if (frame < 9) {
                frame++;
            }

            if (strike) {
                score += 10;
                strike = false;
            } else if (spare) {
                score += 5;
                spare = false;
            }
        }
    }

    return score;
}