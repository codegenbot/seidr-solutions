int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
            if (i < s.length() && s[i] != '/') {
                score += s[i] - '0';
            }
        } else if (s[i] == '/') {
            int next = s[i + 1] - '0';
            int prev = s[i - 1] - '0';
            score += 10 + prev + next;
            i++;
        } else {
            score += s[i] - '0';
        }
    }
    return score;
}