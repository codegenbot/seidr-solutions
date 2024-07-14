int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < 11 && s[next] != '/'){
                next++;
            }
            int first = s[i+1] - '0';
            int second = s[next-1] - '0';
            score += first + second;
        } else {
            int count = 0;
            while (i < 10 && s[i] != '/') {
                count *= 10;
                count += s[i] - '0';
                i++;
            }
            score += count;
        }
    }
    return score;
}