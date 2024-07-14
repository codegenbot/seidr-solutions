int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int count = 0;
            while (i < s.size() && isdigit(s[i])) {
                count *= 10;
                count += s[i++] - '0';
            }
            score += count;
        } else {
            int first = s[i] - '0';
            i++;
            if (s[i] == '/') {
                i++;
                int second = s[i] - '0';
                score += first + second;
            } else {
                score += first + 10;
            }
        }
    }
    return score;
}