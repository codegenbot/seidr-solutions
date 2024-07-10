int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int frame = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (inFrame ? 10 : 0);
            frame++;
            inFrame = false;
        } else if (isdigit(s[i])) {
            int hits = s[i] - '0';
            if (inFrame) {
                if (hits == 1) {
                    score += 10;
                    frame++;
                    inFrame = false;
                } else {
                    score += hits * 2;
                    inFrame = false;
                }
            } else {
                score += hits;
            }
        } else if (s[i] == '/') {
            inFrame = true;
        }
    }

    return score;
}