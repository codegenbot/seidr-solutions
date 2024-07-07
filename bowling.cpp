int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - stoi(s.substr(0, s.find('/'))));
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        } else { // X
            if (roll == 1) {
                score += 10;
            } else {
                score += 10 + (stoi(s.substr(s.find('X') - 1, 2)) - 10);
            }
            roll = 0;
        }
    }
    return score;
}