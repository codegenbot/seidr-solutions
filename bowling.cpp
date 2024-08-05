int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int strikeScore = 10;
            if (i > 1 && s[i - 2] == 'X') {
                strikeScore = 20;
            }
            score += strikeScore + (currentFrame < 10 ? getDigit(s, i + 1) : 0);
            currentFrame++;
        } else {
            int digit1 = getDigit(s, i);
            int digit2 = getDigit(s, i + 1);
            if (digit1 == 10 && digit2 == '/') {
                score += 20;
                currentFrame++;
            } else {
                score += digit1 + digit2;
                currentFrame++;
            }
        }
    }
    return score;
}

int getDigit(string s, int i) {
    while (i < s.length() && !isdigit(s[i])) {
        if (s[i] == '/') {
            return 10;
        }
        ++i;
    }
    return s[i] - '0';
}