int bowlingScore(const string& input) {
    int score = 0;
    int currentFrame = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (int)(input[currentFrame].str() - '0');
            currentFrame++;
        } else {
            int spare = int(c - '0');
            if (currentFrame < 9) {
                // If it's not the last frame and we have a spare, calculate for the next frame
                score += spare + 10;
            } else {
                // If it's the last frame and we have a spare, just add the spare
                score += spare;
            }
        }
    }
    return score;
}