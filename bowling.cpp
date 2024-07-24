int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - (roll == 1 ? stoi(s.substr(0, s.find('/'))) : stoi(s.substr(s.find('/') + 1, s.find('/', s.find('/') + 1) - s.find('/') - 1))));
            }
            roll = 0;
        } else {
            if (c == 'X') {
                score += 10;
                roll++;
            } else if (isdigit(c)) {
                int points = stoi(string(1, c));
                if (roll < 2) {
                    score += points;
                    roll++;
                } else {
                    score += min(points, 10 - score % 10);
                }
            }
        }
    }
    return score;
}