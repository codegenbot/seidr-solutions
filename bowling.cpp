int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - (10 - currentRoll);
            }
            currentRoll = 0;
            frame++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        } else {
            if (c == 'X') {
                score += 10 + (frame < 10 ? 10 : 0);
                currentRoll = 0;
                frame++;
            }
        }
    }

    return score;
}