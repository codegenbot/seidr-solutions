int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X' || (i < s.length() - 1 && (s[i] == '/' && s[i + 1] != '/'))) {
            score += 10;
            spare = true;
        } else if (i < s.length() - 1) {
            int a = s[i] - '0';
            int b = s[i + 1] - '0';
            if (s[i + 1] == '/') continue;
            score += a + b;
        }
        if (!spare && i < s.length() - 1) {
            if (s[i] == '/' && s[i + 1] != '/') spare = true;
        } else if (spare) {
            score++;
            spare = false;
        }
    }
    return score;
}