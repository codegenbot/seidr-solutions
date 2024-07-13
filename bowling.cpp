int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (10 - (s[i+1] - '0')) + (10 - (s[i+2] - '0'));
            i++;
        } else {
            int first = s[i] - '0';
            int second = s[i+1] - '0';
            if (first == 0 && second == 0) {
                score += 10;
            } else {
                score += 10 + first + second;
            }
        }
    }
    return score;
}