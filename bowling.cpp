int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (c == '/') {
            continue;
        } else if (strike) {
            score += 10 + stoi(string(1, c));
            strike = false;
        } else {
            int pin = stoi(string(1, c));
            if (pin < 5) {
                score += pin;
            } else {
                score += 10 - pin;
            }
        }
    }
    return score;
}