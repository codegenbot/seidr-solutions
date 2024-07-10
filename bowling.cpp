int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/') + 1, 1)) % 10);
            frame++;
        } else {
            int total = 0;
            for (int i = 0; i < 2 || c == 'X'; i++) {
                if (c == 'X') {
                    score += 10;
                    frame++;
                    break;
                }
                total += c - '0';
                c = s[s.find(c) + 1];
            }
            if (total >= 10) {
                score += 10;
            } else {
                score += total;
            }
        }
    }
    return score;
}