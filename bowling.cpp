int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame == 10) {
                return -1; // invalid input
            }
            currentFrame++;
        } else if (isdigit(s[i])) {
            int pins = s[i] - '0';
            if (i + 1 < s.length() && isdigit(s[i+1])) {
                pins *= 10;
                i++; // skip the next digit
            }
            score += pins;
            if (currentFrame == 10) {
                break; // we have scored all 10 frames
            }
        }
    }
    return score;
}