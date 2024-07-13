int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) % 10);
            frame++;
        } else {
            int points = stoi(string(1, c)) * 10 + stoi(string(1, s[s.find(c) + 1])) % 10;
            if (points == 10) {
                score += 10;
                frame++;
            } else {
                score += points;
                frame++;
            }
        }
    }
    return score;
}