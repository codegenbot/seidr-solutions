int bowlingScore(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == '/') {
            if ('X' != prevChar && 'X' != prevNextChar) {
                score += 10 - (10 - (prevRoll + 1));
            }
            prevRoll = 0;
        } else if (c >= '1' && c <= '9') {
            prevRoll++;
        } else if (c == 'X') {
            score += 10;
            prevRoll = 0;
        }
    prevChar = nextChar;
    nextChar = c;
    prevNextChar = c;
    }
    return score;
}