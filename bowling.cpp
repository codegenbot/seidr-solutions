int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X' || (s[i] == '/' && i > 17)) {
            score += 10 + bonusForPreviousTwoFrames(s, i);
            currentFrame++;
        }
        else if(s[i] == '/') {
            score += calculateScoreForCurrentFrame(s, i);
            currentFrame++;
        }
    }
    return score;
}

int bonusForPreviousTwoFrames(string s, int i) {
    int prevPrev = 0;
    int prev = getNumber(s, i-1);
    if(i > 2)
        prevPrev = getNumber(s, i-2);
    return (prev + prevPrev <= 10) ? prev + prevPrev : 10;
}

int getNumber(string s, int i) {
    return s[i] - '0';
}

int calculateScoreForCurrentFrame(string s, int i) {
    int a = getNumber(s, i-1);
    int b = getNumber(s, i);
    if(a+b > 10)
        return 10;
    else
        return a + b;
}