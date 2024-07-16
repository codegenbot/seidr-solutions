int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int strike = 10 - (s[i + 1] - '0');
            score += strike;
            i += 2;
        } else {
            int frame = 0;
            while (i < s.length() && s[i] != '/') {
                frame = frame * 10 + (s[i] - '0');
                i++;
            }
            score += frame;
        }
    }
    return score;
}