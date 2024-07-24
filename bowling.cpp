int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            continue;
        } else {
            int currentRoll = c - '0';
            score += currentRoll;
            rolls++;

            if (rolls < 10) {
                if (s[4] != '/' && s[5] != '/') {
                    score += currentRoll;
                    rolls++;
                }
            }
        }
    }

    return score;
}