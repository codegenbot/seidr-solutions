int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 -stoi(string(1, c))) + (roll ? 10 : 0);
            }
            roll = 0;
            lastRoll = false;
        } else {
            roll++;
            if (!lastRoll && c != 'X') {
                score += stoi(c) + (roll == 2 ? 10 : 0);
            }
            lastRoll = roll > 1;
        }
    }

    return score;
}