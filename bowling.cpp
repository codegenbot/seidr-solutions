int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (s[s.length() - 2] - '0');
            frame++;
        } else {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                if (frame < 10 && s[s.length() - 1] != 'X' && s[s.length() - 1] != '/') {
                    int nextPins = s[s.length() - 1] - '0';
                    if (nextPins + pins > 10) {
                        score += 10;
                        frame++;
                    } else {
                        score += pins + nextPins;
                        frame++;
                    }
                } else {
                    frame++;
                }
            }
        }
    }
    return score;
}