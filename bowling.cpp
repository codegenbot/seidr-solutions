int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int frameScore = 0;
            if (s[i + 1] == '/') {
                frameScore = to_digit(s[i]) * 10 + to_digit(s[i+1]);
                i++;
            } else {
                frameScore = to_digit(s[i]);
            }
            score += frameScore;
        }
    }
    return score;
}

int to_digit(char c) {
    return c - '0';
}