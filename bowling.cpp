int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            strike = true;
            score += 10;
        } else if (s[i] == '/') {
            int prev = s[i-1] - '0';
            score += prev * 2 + 8;
        } else {
            if (strike) {
                score += 10;
                strike = false;
            } else {
                int n = s[i] - '0' + (s[i+1] == '/') ? 0 : s[i+1] - '0';
                score += n;
                i++;
            }
        }
    }
    return score;
}