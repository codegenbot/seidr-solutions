int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (roll > 0) {
                if (roll < 10) {
                    score += 10 - roll;
                } else {
                    score += roll;
                }
            }
            roll = 0;
        } else {
            roll++;
        }
    }

    if (roll > 0) {
        if (roll < 10) {
            score += 10 - roll;
        } else {
            score += roll;
        }
    }

    return score;
}