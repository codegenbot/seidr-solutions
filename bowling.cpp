int bowlingScore(string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 9)
                score += 10;
            else
                score += roll;
            roll = 0;
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        } else if (s[i] == 'K') {
            if (roll > 9)
                score += 10 + (10 - roll);
            else
                score += 10;
            roll = 0;
        }
    }

    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score;
}