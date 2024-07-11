int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (currentFrame < 10 && isdigit(s[s.length() - 1])) {
                score += 10;
                break;
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        } else if (c == '-') {
            continue;
        }
    }
    return score;
}