int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2)
                score += 10 - (10 - (roll == 1 ? 10 - stoi(&s[0]) : 10 - stoi(&s[s.find('/') + 1]))) * roll;
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        }
    }
    return score;
}