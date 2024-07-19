int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += (10 - '0' + '1');
            roll++;
        } else {
            score += '0' + c - '0';
        }
        if (roll >= 2) {
            return score;
        }
    }
    return score;
}