int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < 11 && s[next] != '/') next++;
            int first = s[i+1] - '0' + s[i+2] - '0';
            int second = s[next-1] - '0' + s[next-2] - '0';
            score += first + second;
        } else {
            int first = s[i] - '0';
            int second = s[i+1] - '0';
            if (first + second >= 10) {
                score += 10 + 10;
            } else {
                score += first + second;
            }
        }
    }
    return score;
}