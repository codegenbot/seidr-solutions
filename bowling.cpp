int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    bool spare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (strike ? 10 : 0) + (spare ? 5 : 0);
            strike = true;
            spare = false;
        } else if (c == '/') {
            score += 10 + (strike ? 10 : 0);
            strike = false;
            spare = true;
        } else {
            int x = c - '0';
            if (strike) {
                score += x;
                strike = false;
            } else if (spare) {
                score += x;
                spare = false;
            } else {
                score += x;
            }
        }
    }

    return score;
}