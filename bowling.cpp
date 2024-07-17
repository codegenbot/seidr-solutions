int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 9 ? bowlingScoreHelper(&s[i+1]) : 0);
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += firstRoll + secondRoll;
            i++;
        } else {
            score += s[i] - '0';
        }
    }
    return score;
}

int bowlingScoreHelper(string* s) {
    int score = 0;
    for (int i = 0; i < min(2, s->length()); i++) {
        if ((*s)[i] == 'X') {
            score += 10;
        } else if ((*s)[i] == '/') {
            int firstRoll = (*s)[i-1] - '0';
            int secondRoll = (*s)[i+1] - '0';
            score += firstRoll + secondRoll;
            i++;
        } else {
            score += (*s)[i] - '0';
        }
    }
    return score;
}