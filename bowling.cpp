int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == '/') {
            score += 10 - (i+1);
        } else {
            score += s[i] - '0';
        }
    }
    return score;
}