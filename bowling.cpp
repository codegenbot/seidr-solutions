int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int spare = 0;
    int strike = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (spare * 10);
            spare = 0;
            strike++;
            continue;
        }
        if (c == '/') {
            score += 10 - frame + 1;
            spare = 1;
            continue;
        }
        int pins = c - '0';
        score += pins;

        if (frame < 9 && score >= 10) {
            frame++;
        }

        if (frame == 10) {
            break;
        }
    }

    for (int i = 0; i < strike; i++) {
        score += 10;
    }

    return score;
}