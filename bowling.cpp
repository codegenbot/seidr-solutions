int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(rolls*2, 1)) + stoi(s.substr(rolls*2+1, 1)));
            rolls++;
        } else {
            int roll = stod(c) * 10 + stod(s.substr(rolls*2+1, 1));
            if (roll == 10) {
                score += 10;
                rolls++;
            } else {
                score += roll;
                rolls++;
            }
        }
    }
    return score;
}