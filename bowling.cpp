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
            int points = stoi(c + "0");
            if (points < 10) {
                score += points;
                frame++;
            } else {
                score += points;
                if (frame == 9 && s[1] != 'X') {
                    score -= (10 - (s[1] - '0'));
                }
                frame++;
            }
        }
    }
    return score;
}