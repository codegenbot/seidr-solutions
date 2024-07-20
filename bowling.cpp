int bowlingScore(string str) {
    int score = 0;
    bool previousStrike = false;
    
    for (char c : str) {
        if (c == 'X') {
            score += 30;
            previousStrike = true;
        } else if (c == '/') {
            score += 10 - stoi(string(1, c)) * 2;
            previousStrike = false;
        } else if (isdigit(c)) {
            int rolls = stoi(string(1, c));
            if (previousStrike) {
                score += rolls * 3 + 10;
            } else {
                score += rolls;
            }
            previousStrike = false;
        }
    }
    
    return score;
}