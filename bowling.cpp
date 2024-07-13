int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 - (10 - (rolls % 2 ? stoi(&c + 1) : 10));
            rolls++;
        } else {
            int roll = stoi(string(1, c));
            if (roll < 5) {
                score += roll;
                rolls++;
            } else {
                score += 10 + (roll - 5);
                rolls++;
            }
        }
    }
    return score;
}