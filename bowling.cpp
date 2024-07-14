int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = (i + 2 < s.length()) ? (s[i + 1] - '0') * 10 + (s[i + 2] - '0') : 10;
            score += 10 + nextTwo;
        } else {
            int currentFrame = 0;
            for (int j = i; j < s.length(); j++) {
                if (j == s.length() - 1 || s[j + 1] == '/') {
                    currentFrame = currentFrame * 10 + (s[j] - '0');
                    score += currentFrame;
                    break;
                }
                currentFrame = currentFrame * 10 + (s[j] - '0');
            }
        }
    }
    return score;
}