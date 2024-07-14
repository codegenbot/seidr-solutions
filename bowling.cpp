int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 8 ? 10 : 0);
            spare = true;
        } else if (s[i] == '/') {
            int frame = (i > 0) ? (i - 1) / 2 : i / 2;
            if (!spare) score += (int)s[i-1] + 10 - '0';
            score += 10;
            spare = false;
        } else {
            int frame = (i > 0) ? (i - 1) / 2 : i / 2;
            if (!spare) score += s[i] - '0' + (int)(s[i-1] - '0');
            if (frame < 9) spare = false;
        }
    }
    return score;
}