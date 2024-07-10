int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool bonus = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (bonus ? 10 : 0);
            roll++;
            bonus = true;
        } else if (c == '/') {
            score += 10 - roll;
            roll++;
            bonus = false;
        } else {
            int points = c - '0' * 2;
            score += points;
            roll++;
        }
    }

    return score;
}