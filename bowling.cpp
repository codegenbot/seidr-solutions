int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2 = 0;

    for (char c : s) {
        if (c == '/') {
            if (roll1 + roll2 < 10)
                score += roll1 + roll2;
            else
                score += 10;
            roll1 = 0;
            roll2 = 0;
        } else if (isdigit(c)) {
            if (roll1 > 0) {
                roll2 *= 10;
                roll2 += c - '0';
            } else {
                roll1 *= 10;
                roll1 += c - '0';
            }
        }
    }

    if (roll1 + roll2 < 10)
        score += roll1 + roll2;
    else
        score += 10;

    return score;
}