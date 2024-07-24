int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    bool spare = false;

    for (char c : str) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
            spare = true;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
            spare = false;
        } else if (isdigit(c)) {
            int points = c - '0';
            if (!spare) {
                score += points;
                roll++;
            } else {
                score += points;
                if (roll == 2) {
                    spare = false;
                }
            }
        }
    }

    return score;
}