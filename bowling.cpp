int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(string(1, c)) * 2);
            frame++;
        } else {
            int pins = stoi(string(1, c));
            if (pins == 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                if (frame < 9 && s[frame] != 'X' && s[2*frame+1] != '/') {
                    score += stoi(string(1, s[2*frame])) + stoi(string(1, s[2*frame+1]));
                    frame++;
                }
            }
        }
    }
    return score;
}