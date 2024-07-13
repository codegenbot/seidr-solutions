int bowlingScore(string str) {
    int score = 0;
    bool strike = false;
    bool spare = false;
    for (char c : str) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (c == '/') {
            score += 10 - 5;
            spare = true;
        } else if (!strike && !spare) {
            score += c - '0';
        }
    }
    return score;
}