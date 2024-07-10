int bowlingScore(string s) {
    int score = 0;
    bool newRoll = true;
    for (char c : s) {
        if (c == '/') {
            newRoll = true;
        } else if (c == 'X' || (newRoll && c != '0')) {
            score += 10 + (newRoll ? (c - '0') * 2 : (c - '0'));
            newRoll = false;
        } else {
            score += c - '0';
        }
    }
    return score;
}