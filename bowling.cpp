int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(string(1, c)) + stoi(string(1, s[s.find('/') + 1])));
            frame++;
        } else {
            int pins = stoi(string(1, c));
            if (frame < 9) {
                if (pins < 10) {
                    score += pins;
                    frame++;
                } else {
                    score += 10;
                    frame++;
                    score += pins - 10;
                }
            } else {
                score += pins;
                frame++;
            }
        }
    }
    return score;
}