int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == '/') {
            if (roll > 0) {
                score += roll;
            }
            roll = 0;
            frame++;
        } else {
            roll++;
        }
    }

    if (roll > 0) {
        score += roll;
    }

    return score;
}