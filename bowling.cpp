int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + 10;
            currentFrame++;
        } else if (s[i] == '/') {
            int strikeCount = 2;
            while (i + 1 < s.length() && s[i+1] != 'X' && s[i+1] != '/') {
                i++;
                strikeCount--;
            }
            score += 10 + strikeCount;
            currentFrame++;
        } else if (s[i] == ' ') {
            continue;
        } else {
            int count = 0;
            while (i + 1 < s.length() && s[i+1] != 'X' && s[i+1] != '/') {
                i++;
                count++;
            }
            score += count;
            currentFrame++;
        }
    }
    return score;
}