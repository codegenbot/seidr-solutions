int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame == 10 ? 10 : 20);
            currentFrame++;
        } else if (s[i] == '/') {
            int count = 10 - (s[i-1] - '0');
            score += count;
            currentFrame++;
        } else {
            int count = s[i] - '0';
            score += count;
            if (i + 1 < s.length() && s[i+1] == '/') {
                i++; // skip the '/'
                score += 10 - count;
                currentFrame++;
            }
        }
    }
    return score;
}