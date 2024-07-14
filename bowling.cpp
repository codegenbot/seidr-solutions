int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + getRemainingFrame(s, frame);
            frame++;
        } else {
            int count = c - '0';
            while (count > 0) {
                if (count >= 10) {
                    score += 10;
                    frame++;
                    count -= 10;
                } else {
                    score += count;
                    frame++;
                    count = 0;
                }
            }
        }
    }
    return score;
}

int getRemainingFrame(string s, int frame) {
    int score = 0;
    for (int i = frame; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 30;
            break;
        } else if (s[i] == '/') {
            score += 10 + getRemainingFrame(s, i);
            break;
        } else {
            int count = s[i] - '0';
            while (i < s.size() && s[i] >= '1' && s[i] <= '9') {
                count = count * 10 + (s[i] - '0');
                i++;
            }
            score += count;
        }
    }
    return score;
}