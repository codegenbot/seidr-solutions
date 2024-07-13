int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(frame*2, 2)) % 10);
            frame++;
        } else {
            int points = stoi(c + s.substr(frame*2+1, 1));
            if (points < 10) {
                score += points;
                frame++;
            } else {
                if (s[frame*2+1] == 'X') {
                    score += 10 + points;
                } else {
                    score += 10 + points - (stoi(s.substr(frame*2+1, 1)) % 10);
                }
                frame++;
            }
        }
    }
    return score;
}