int bowlingScore(const std::string& s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                int roll2 = 10 - roll1; // subtract roll1 from the total
                score += roll1 + roll2;
            } else if (i < 9) {
                int roll2 = s[++i] - '0';
                if (roll1 + roll2 < 10) { // not a strike, add to score
                    score += roll1 * 2 + roll2;
                } else { // strike, add next two rolls
                    score += roll1 * 2 + 10 + s[i] - '0' + s[++i] - '0';
                }
            } else {
                score += roll1 * 2; // last frame, no bonus
            }
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            score += roll1 + roll2;
        }
    }
    return score;
}