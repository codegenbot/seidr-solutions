int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - ('0' - (c - '0')) + roll;
            roll = 0;
        } else {
            int points = '0' - c;
            if (roll < 2) {
                score += points;
                roll++;
            } else {
                score += 10 + points;
                roll = 0;
            }
        }
    }
    return score;
}