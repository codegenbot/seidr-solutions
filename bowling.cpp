int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') {
            if(s[i-1] != 'X') {
                score += (s[i-1] - '0') * 10;
            } else {
                score += 10;
                currentFrame++;
            }
        } else if(s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else {
            int pins = s[i] - '0';
            score += pins;
            if(currentFrame < 10) {
                currentFrame++;
            }
        }
    }
    return score;
}