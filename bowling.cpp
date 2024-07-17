int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < s.length() - 2 && s[i+1] == '/' ? 10 : 0);
            frame++;
        } else if (s[i] == '/') {
            int pins = 10 - (s[i-1] - '0');
            score += pins;
            frame++;
        } else {
            int pins = (s[i] - '0') + ((i+1 < s.length() && s[i+1] >= '1' && s[i+1] <= '9') ? (s[i+1] - '0') : 0);
            score += pins;
            if (frame == 10) {
                break;
            }
        }
    }
    return score;
}