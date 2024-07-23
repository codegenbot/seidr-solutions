int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(currentFrame < 10) {
                score += min(10 - (currentFrame-1),stoi(s.substr(i-1,i-1))) * 10;
            }
            currentFrame++;
        } else if(currentFrame <= 9 && s[i] != 'X') {
            int strike = i + 2 > s.length() ? 0 : stoi(s.substr(i,1));
            score += (currentFrame == 1) ? min(10 - (currentFrame-1),strike) * 10 : min(10 - (currentFrame-1),strike);
        }
    }
    return score;
}