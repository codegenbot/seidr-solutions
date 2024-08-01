int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    bool strike = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (!strike) {
                score += pins;
                rolls++;
            }
            if (rolls < 2 && strike) {
                strike = false;
                score += pins;
                rolls++;
            }
        } else if (c == '/') {
            strike = false;
            rolls++;
        }
    }

    return score;
}