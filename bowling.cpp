int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            if (s[i-1] != 'X') {
                score += 10 - (10 - stoi(s.substr(i-1, 1)));
            } else {
                score += 10;
            }
        } else if (s[i] == 'X') {
            score += 10;
        } else {
            score += stoi(s.substr(i, 1));
        }
    }
    return score;
}