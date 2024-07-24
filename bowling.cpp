int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (currentFrame < 10 ? stoi(string(1, c)) : 0);
            currentFrame++;
        } else {
            int points = stoi(string(1, c));
            if (points < 10) {
                score += points;
                currentFrame++;
            } else {
                score += points + 10 - (currentFrame < 10 ? 1 : 0);
                currentFrame++;
            }
        }
    }
    return score;
}