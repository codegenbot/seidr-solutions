int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentFrame = 1;
    int spareOrStrike = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(inFrame) {
                score += 10 - (s[i-1] - '0');
                inFrame = false;
            }
            else{
                spareOrStrike++;
            }
        }
        else if(s[i] == 'X') {
            score += 10;
            inFrame = false;
            currentFrame++;
        }
        else {
            int pins = s[i] - '0';
            if(inFrame) {
                score += pins;
                if(pins < 10) {
                    spareOrStrike++;
                }
                inFrame = false;
                currentFrame++;
            }
            else{
                score += pins;
            }
        }
    }

    return score;
}