int bowlingScore(string s) {
    int score = 0;
    bool prevStrike = false;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') { // strike in this frame
            score += 10 + strikeBonus(currentFrame);
            prevStrike = true;
            currentFrame++;
        } else if (c >= '1' && c <= '9') { // normal roll in this frame
            int pins = c - '0';
            if (prevStrike) {
                score += pins;
                prevStrike = false;
                currentFrame++;
            } else {
                score += pins;
            }
        } else { // spare in this frame
            score += 10 + strikeBonus(currentFrame);
            currentFrame++;
        }

        if (currentFrame > 10) break; // no more frames to process
    }

    return score;
}

int strikeBonus(int frame) {
    if (frame <= 2) return 0;
    if (frame == 3) return 1;
    if (frame >= 4) return 2;

    return 0;
}