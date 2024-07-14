int bowlingScore(string &s) {
    int score = 0;
    int frame = 1;
    bool strike = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10 + ((strike || i < s.size() - 2 && s[i+2] != '/') ? 10 : 0);
            strike = true;
        } else if (s[i] == '/') {
            int a = i - 1, b = i + 1;
            while (a >= 0 && b < s.size() && (s[a] != 'X' || s[b] != 'X')) {
                if (s[a] != ' ') a--;
                if (s[b] != ' ') b++;
            }
            score += (i - strike ? 10 : 15) + ((a >= 0 && s[a] == '/') ? 1 : (b < s.size() && s[b] == '/') ? 1 : 0);
        } else {
            int a = i, b = i;
            while (a > 0 && s[a-1] != ' ') a--;
            score += (i - strike ? a : 10) + (s[i] != ' ') || i < s.size() - 2 ? 1 : 0;
        }
    }
    return score;
}