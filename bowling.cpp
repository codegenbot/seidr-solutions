int calculateStrikeScore(const std::string& s, int index) {
    int score = 10;
    if (s[index + 2] == 'X') score += 10;
    else if (s[index + 2] == '/') score += 10 - (s[index + 3] - '0');
    else score += s[index + 2] - '0';
    return score;
}

int calculateNextBallsScore(const std::string& s, int index) {
    if (s[index + 1] == 'X') return 10;
    else if (s[index + 1] == '/') return 10 - (s[index + 2] - '0');
    else return s[index + 1] - '0';
}

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            total += 10 + calculateStrikeScore(s, i) + calculateNextBallsScore(s, i);
            frame++;
        }
        if (frame == 10) break;
    }
    return total;
}